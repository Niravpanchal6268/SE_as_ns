 /*Multiple inheritance 
 */
#include<iostream>
using namespace std;
class A 
{
    public : 
    void displayA()
    {
        cout<<"\nclass A";
    }

};
class B 
{
    public :
    void displayB()
    {
        cout<<"\nclass B:";
    }

};
class C : public A,public B
{
    void displayC()
    {
        cout<<"\nclass C";          /*class c is access the class a and class b*/

    }

};

main()
{
     C c;
     c.displayA();
     c.displayB();
    
    return 0;
}
