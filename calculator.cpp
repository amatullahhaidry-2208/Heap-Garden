//calculator 
#include <iostream>
using namespace std;
int main()
{
    cout<<"******* WELCOME TO PROGRAMMING *******"<<endl;
    cout<<"-------- CALCULATOR -------"<<endl;
    
    int a;
    int b;
    char operation ;
    cout<<"ENTER FIRST NUMBER: "<<endl;
    cin>>a;
    cout<<"ENTER SECOND NUMBER: "<<endl;
    cin>>b; 
    cout<<"ENTER OPRATION: "<<endl;
    cin>>operation;
    cout<<"-------- ANSWER --------"<<endl;

    if (operation =='+')
    {
        int sum=a+b;
        cout<<"SUM OF TWO NUMBERS IS: "<<sum<<endl;
    }
    if (operation =='-')
    {
        int difference=a-b;
        cout<<"DIFFERENCE OF TWO NUMBERS IS: "<<difference<<endl;
    }
    if (operation=='*')
    {
        int product=a*b;
        cout<<"PRODUCT OF TWO NUMBERS IS: "<<product<<endl;
    }
    if (operation =='/')
    {
        int division=a/b;
        cout<<"DIVISION OF TWO NUMBERS IS: "<<division<<endl;
    }
    return 0;
}

