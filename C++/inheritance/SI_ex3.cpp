#include<iostream>
using namespace std;
class math
{
        int a,b,an;
        public :
        int  multi()
        {
        cout<<"Enter A";
        cin>>a;
        cout<<"Enter b";
        cin>>b;
        an=a*b;
        return an;
        }

};
class answer : public math
{  
    public:
    void display()
    {
        int result =multi();
        cout<<"multiplication A  & B is "<<result;
    }
};
main()
{
    answer ans;
    ans.display();
}
