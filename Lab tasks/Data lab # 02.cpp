#include<iostream>
using namespace std; 
string stringReverse(string str)
{
    int i = str.length() - 1;
    int start, end = i + 1;
    string result = "";
     
    while(i >= 0)
    {
        if(str[i] == ' ')
        {
            start = i + 1;
            while(start != end)
                result += str[start++];
             
            result += ' ';
             
            end = i;
        }
        i--;
    }
    start = 0;
    while(start != end)
        result += str[start++];
     
    return result;
}
int main()
{
    string str = "cat is running";
    cout << stringReverse(str);    
    return 0;
}

#include <iostream>
using namespace std;
int add(int val)
{
   if (val>1)
    return val+add(val-1);
   
   else 
   return 1;
}
int main()
{
    int n;
    cout<<"Enter a positive integer"<<endl;
    cout<<"and this program will add all positive integers which are below from the number you entered"<<endl;
    cin>>n;
    cout<<" addition of below numbers is = "<< add(n) <<endl;
    add(n);
    return 0;
}

#include <iostream>
using namespace std;
int fact(int val)
{
   if (val>1)
    return val+fact(val-1);
   else 
   return 1;
}
int main()
{
    int n;
    cout<<"enter a positive integer"<<endl;
    cin>>n;
    cout<<" factorial of your given number is "<<fact(n)<<endl;
    fact(n);
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int counter = 0;
int temp[0];
bool elfish(char *ptr)
{
    bool ans = false;
    if(*ptr == '\0')
    {
        return ans;
    }
    if(*ptr == 'e' || *ptr == 'l' || *ptr == 'f'){
        bool ispresent = true;
        for(int i = 0;i<counter;i++)
        {
            if(*ptr == temp[i])
            {
                ispresent = false;
                break;
            }
        }
        if(ispresent == true)
        {
            temp[counter] = *ptr;
            counter++;
        }
    }
    ans *= elfish(ptr + 1);
    if(counter >= 3)
    {
        ans = true;
        return ans;
    }
    else
    {
        ans = false;
        return ans;
    }
    return ans;
}

int main(){
    bool ans;
    string word;
    cout<<"Enter word please: ";
    cin>>word;
    ans = elfish(&word[0]);
    cout<<"Ans: "<<ans<<endl;

    return 0;
}
