// Question no # 1

/*write a program that ask the user the enter the intergers as inputs to be stored in the varaiables 'a'
and 'b' respectively. There are also two integers pointers named PtrA and ptrB. Assign the values of 'a' and 'b' to 
ptrA and ptrB respectively, and display them.*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"Ask the user the enter the number" << endl;
    cin >> a;
    cin >> b;
    int* ptrA = &a;
    int* ptrB = &b;
    cout << "value of 'A' to pointer" << *ptrA << endl;
    cout << "value of 'B' to pointer" << *ptrB << endl;
    return 0;
}


// Question no # 1

/* write a program which creates a dynamic integer and ask the user to initialize it with a value. 
Print the value and destroy the variable.*/

#include<iostream>
using namespace std;
int main()
{
    int* ptr = new int;
    cout << "enter the value of pointer" << endl;
    cin >> *ptr;
    cout << "the value of the pointer is " << *ptr << endl;

    cout << *ptr << endl;
    delete ptr;
    return 0;
}

// Question no # 3

/* write a program to create a dynamic character array. Ask the user for the size of the array.
Initialize the array using user input and print the array*/

#include<iostream>
using namespace std;
int main()
{
    char* arr;
    arr = new char[5];
    for (int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    for (int j=0;j<5;j++)
    {
        cout << arr[j] << "  ";
    }
    return 0;
}


// Question no # 4

/* write a program to create a 2D dynamic array.Initialize the array.Print the array using a
function.Delete the array*/

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout <<"Enter the size of the 2D-array" << endl;
    cout <<"Enter the row:" << endl;
    cin >> row;
    cout <<"Enter the col:" << endl;
    cin >> col;
    int **array = new int *[row];
    for (int i=0;i<=row;i++)
    {
        array[i] = new int[col];
    }
    cout <<"Enter the values: " << endl;
    for (int i=0;i<=row;i++)
    {
        for (int j=0;j<=col;j++)
        {
            cin >> array[row][col];
        }
    }
    for (int i=0;i<=row;i++)
    {
        for (int j=0;j<=col;j++)
        {
            cout << array[row][col] << " ";
        }
        cout << endl;
    }
    for (int i=0;i<=col;i++)
    {
        delete[] array[col];
    }
    delete[] array;
    return 0;
}






