// question no # 1

#include<iostream>
using namespace std;
int main()
{
    char a,b;
    cout <<"Ask the user to enter the character" << endl;
    cin >> a;
    cin >> b;
    char* ptrA = &a;
    char* ptrB = &b;
    cout << "the value of 'A'\t" << *ptrA << endl;
    cout << "the value of 'B'\t" << *ptrB << endl;

    cout << "the address  of 'A'\t" << &ptrA << endl;
    cout << "the address  of 'B'\t" << &ptrB << endl;

    cout << "the address  of 'A'\t" << &a << endl;
    cout << "the address  of 'B'\t" << &b << endl;

    return 0;
}


// Question no # 2

#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    cout <<"Enter the value" << endl;
    cin >> *ptr;
    cout <<"the value of the pointer is ----- " << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    delete ptr;

    return 0;
}

// Question no # 3

#include<iostream>
using namespace std;
int main()
{
    char* arr;
    int size;
    arr = new char[size];
    cout << "enter the size of the array" << endl;
    cin >> size;
    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    for (int j=0;j<size;j++)
    {
        cout << arr[j] << "  " ;
    }
    delete arr;
    return 0;
}

// Question no # 4


#include<iostream>
using namespace std;
void init(int **ptr,int row,int col)
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++);
    }
}
void display(int **ptr,int row,int col)
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << "\n";
    }
}
void distroy(int **ptr)
{
    delete ptr;
}
int main()
{
    int row;
    cout << "Enter the row" << endl;
    cin >> row;
    int col;
    cout <<"Enter the column" << endl;
    cin >> col;
    int **ptr = new int*[row];
    for (int i=0;i<row;i++)
    ptr[i] = new int[col];

    for (int i=0;i<row;i++)
    for (int j=0;j<col;j++)
    cin >> ptr[i][j];

    init(ptr,row,col);
    display(ptr,row,col);
    distroy(ptr);
    return 0;

}
