#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class stack
{
    private:
    node *top;
    int size;

    public:
        stack(int s);
        ~stack();
        void push(int info);
        void pop();
        void display();

};

stack::stack(int s)
{
    top = NULL;
    size = s;
}

stack::~stack()
{
    node *temp = top;
    while(temp != NULL){
        top = temp;
        temp = temp->next;
        delete top;
    }
    delete temp;
}

void stack::push(int info)
{
    if(size == 0){
        cout << "overflow" << endl;
        return ;
    }
    node *temp = new node;
    temp->next = top;
    temp->data = info;
    top = temp;
    size--;
}

void stack::pop()
{
    if(top == NULL)
    {
        cout << "underflow" << endl;
        return ;
    }
    node *temp = top;
    top = top->next;
    size++;
    delete temp;
}

void stack::display()
{
    node *temp = top;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}



int main()
{
    stack obj(5);
    obj.pop();
    obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	obj.push(7);
	obj.display();
	obj.pop();
	obj.push(7);
	obj.push(9);

    obj.pop();
	obj.pop();
	obj.pop();
	obj.pop();
	obj.push(55);
	obj.push(11);
	// obj.pop();
	obj.pop();
	// obj.push(7);
	obj.display();
    
    return 0;
}