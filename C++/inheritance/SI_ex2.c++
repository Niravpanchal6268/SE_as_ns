#include<iostream>
using namespace std;
class animal
{
    public :
    void eat()
    {
        cout<<"\neating ";
    }
    void bark()
    {
        cout<<"\nBarking ";
    }
    
}; 
class animal2 :public animal
{
    public :
    void DOg()
    {
        cout<<"\nDog";
    }
    void cat()
    {
        cout<<"\nCAT";
    }
};




int main(int argc, char const *argv[])
{
    animal2 ani;
      ani.DOg();
      ani.eat();
      ani.bark();
      ani.cat();
      ani.eat();
    
    
    return 0;
}
