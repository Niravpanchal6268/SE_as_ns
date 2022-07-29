#include<iostream>
using namespace std;
class A
{   
    public:
    void display()
    {
        cout<<"\nInside class A";
    }

};
class B :public A
{ 
    public :
    void display()
    {
        cout<<"\nInside class B";
    }

};
main()
{
    B b;
    b.display();
    b.A::display();// ::scop resolution 

}