/*herarchical inheritance 

*/
#include<iostream>
using namespace std;
class A
{
    public:
    void displayA()
    {
      cout<<"class A perent class";
    }
};
class B :public A
{
    public:

     void displayB()
    {
      cout<<"class A perent class";                             /*in this inheritance the class A is  parent class all the other class 
                                                                    bcd is  child  class so the perent clas property access B C S classes */
    }


};
class C : public A
{       public :
     void displayC()
    {
      cout<<"class A perent class";
    }
     
};
class D :public A
{   public :
     void displayD()
    {
      cout<<"class A perent class";
    }
    

};
main()
{
    D d;
    d.displayA();

    

}