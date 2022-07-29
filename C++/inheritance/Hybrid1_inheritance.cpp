#include <iostream>
using namespace std;
class A
{
    public :
    void diplayA()
    {
        cout << "\ndisplayA";
    }
};
class B : public A
{
     public :
    void displayB()
    {
        cout << "\ndisplayB";
    }
}; /* In this inheritance the A class is grand parent class
   class B and class C is the perents class  and the
   class D is child class  so the class b & class c is
   access the class a property class d is access the class b and c
   (all the classes property access the class d but using scop resolution oprator ) */
class C : public A
{
     public :
    void displayC()
    {
        cout << "\ndisplayC";
    }
};
class D : public B, public C
{
     public :
    void diplayD()
    {
        cout << "\ndiplayD";
    }
};
main()
{
    D d;
    d.diplayD();
    d.displayB();
    d.B::diplayA();  //using scop resolution opratior
}
