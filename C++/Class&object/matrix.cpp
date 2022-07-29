//the program is two matrix addition using class in c++
#include<iostream>
using namespace std;
class math
{
  int a[3][3],b[3][3],c[3][3],i,j;
  public :
  void input()
  {
    cout<<"Enter first matrix\n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter a second matrix\n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cin>>b[i][j];
        }
    }
  } 
  void display()
  {
      cout<<"The first matrix\n";
      for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"The second matrix\n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<b[i][j];
        }
        cout<<"\n";
    }
  }
  void add()
  {
      cout<<"the addition :\n";
      for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
  }

};
main()
{
    math matrix;
    matrix.input();
    matrix.display();
    matrix.add();

    
    }
