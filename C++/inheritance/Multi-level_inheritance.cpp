/*Multi_level Inheritance
multi-level inheritance is the class c is access class a and class b properties (both property) are access 
*/
#include<iostream>
using namespace std;
class A
{
    public :
    void diplayA()
    {
        cout<<"\nA class :";
    }
};
class B :public A
{
    public :                                        /* class B is access the class a property */
    void diplayB()
    {
        cout<<"\nB class";
    }
};
class C : public B
{
   public :                             /*class c is acsess ths class A and class B property (both) */
   void displayC()
   {
    cout<<"\nC class";
   }
};
main()
{
    C c;
    c.displayC();
    c.diplayB();
    c.diplayA();
    return 0;
}

