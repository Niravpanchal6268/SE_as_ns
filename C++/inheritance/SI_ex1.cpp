#include<iostream>
using namespace std;
class account
{
    public :
    float salary=10000;
};
class programmer :public account
{
    public :
    float bonus=500;
};

main()
{
    programmer p1;
    cout<<"\n";
    cout<<"Salary::"<<p1.salary<<"\n";
    cout<<"\n";
    cout<<"Bonus::"<<p1.bonus<<"\n";
    
    return 0;
}
