#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    char o;
    cout<<"Enter number1:";
    cin>>a;
    cout<<"Enter an oparetor:";
    cin>>o;
    cout<<"Enter number2:";
    cin>>b;
    switch(o)
    {
    case '+': r=a+b;break;
    case '-': r=a-b;break;
    case 'x': r=a*b;break;
    case '/': r=a/b;break;
    default : o='i';
    cout<<"Invalid oparetor";
    }
    if(o!='i')
    cout<<"\The result is "<<r;
    return 0;
}