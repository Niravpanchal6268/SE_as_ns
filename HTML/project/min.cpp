#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     int a=3,b=6,c=9;
     if(a<b)
    {
        if(a<c)
        {
            return a;
        }
        else
        {   
            return c;

        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    return 0;
    }
}