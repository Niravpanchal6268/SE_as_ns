#include<iostream>
#include<string.h>

using namespace std;
class bank
{
    string name,balace,type;
    int amount;
    
    public:
    void info()
    {
             cout<<"\nENTER YOUR NAME ::";
             cin>>name;
             cout<<"\nENTER YOUR ACCOUNT NO.::";
             cout<<"\nBalace::: ";
             cout<<"\nA/C Type:";


    }

};
main()
{
        bank cou1;
        cou1.info();

}