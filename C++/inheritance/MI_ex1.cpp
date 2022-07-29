#include<iostream>
using namespace std;
class animal
{
    public :
    void Dog()
    {
        cout<<"\nDog";
    }
    void cat()
    {
        cout<<"\nCat";
    }
    void tiger()
    {
        cout<<"\ntiger";
    }
};
class color
{
    public :
    void yellow()
    {
        cout<<"\nyellow";

    }
    void Balck()
    {
        cout<<"\nBalck";
    }
    void White()
    {
        cout<<"White";
    }

};
class place : public color,public animal
{
    public :
    void jungle()
    {   
        cout<<"\njungle";
    }
    void home()
    {
        cout<<"\nhome";
    }

};
main()
{
    place an1;
    

    cout<<"\nanimal name::";
    an1.Dog();
    cout<<"\nanimal color::";
    an1.Balck();
    cout<<"\nanimal place::";
    an1.home();
    


}