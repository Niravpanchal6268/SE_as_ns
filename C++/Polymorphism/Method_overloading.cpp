#include<iostream>
using namespace std;
class A
{

    int c;
    public:

        void display()
        {
            cout<<"\n Indide class A.";
        }    
        void display(float n)
        {
            cout<<"\nA = "<<n;
        }
        void display(int a)
        {
            c=7;
            cout<<"\nAddition ="<<c;
        }
};
main()
{
    A obj;
    obj.display();
    obj.display(5);
    obj.display(9);

    
    
}