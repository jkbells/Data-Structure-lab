
#include<iostream>
#include<string>
using namespace std;

class stack
{
	private:

	 int *top;
	 int *first;
	 int size;

    public:
	  
	  stack(int s);
	  ~stack();
	  void push(int val);
	  void pop();
	  void display();
};


stack::stack(int s)
{
	size = s;
	first = new int[size];
	for (int j =0 ;j<size;j++)
	{
		*(first+j) = 0;
	}
	top = NULL;
}

stack::~stack()
{
	// deleting the pointer top
	delete [] first;
}

void stack::push(int val)
{
	if(top == first+(size-1))
	{
		cout << "stack is overflow" << endl;
		return;
	}
	if (top == NULL)
	{
		top = first;
		*top = val;
		return ;
	}
	top++;
	*top = val;
	return;
}

void stack::pop()
{
    if(top == NULL)
    {
        cout << "stack is overflow" << endl;
        return;
    }
    if(top == first)
    {
        top = NULL;
        return ;
    }
    top--;
    return ;
}

void stack::display()
{
    int temp = 0;
    if(first == NULL)
    {
        cout << "stack is empty" << endl;
        return ;
    }
    while(temp+first <= top)
    {
        cout << *(first+temp) << " ";
        temp++;
    }
    cout << endl;
}
int main()
{
    stack object(5);
	//object.pop();
	object.push(2);
	object.push(3);
	//object.push(4);
	//object.push(5);
	object.push(6);
	//object.push(7);
	object.display();
	object.pop();
	object.pop();
	//object.pop();
	object.push(5);
	//object.pop();
	object.display();
	//object.push(4);
	//object.pop();
	//object.pop();
	//object.display();


	return 0;
}
