#include<iostream>
using namespace std;
template <class T>
T findmin(class T)
{
    if(a<b)
    {
        if(a<c)
        {
            return a;
        }
        else
        {   
            return c;

        }
    }
    else
    {
        if(b<c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
main()
{
    int choice;
    cout<<"\n\n-------------main------------------\n\n";
    cout<<"\n1.Integer";
    cout<<"\n2.float";
    cin>>"choice";
    switch (choice)
    {
    case 1:
            int num1,num2,num3,ans;
            cout<<"Enter num1";
            cin>>num1;
            cout<<"Enter num2";
            cin>>num2;
            cout<<"Enter num3";
            cin>>num2;
            ans=findmin(num1,num2,num3);
            cout<<"\nans="<<ans;
        break;
    
    default:
        break;
    }
}