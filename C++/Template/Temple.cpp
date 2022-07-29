//Thmeple:
/*
Temp;ate is a simple ans yet very powerful tool in c++
-->The simple idea is to pass the data type is parameter 
   so that we don't need to weite same code for different data  type
   EX.if any one wants to sort data then rather than writing and mainstding multople code 
   we just use sort {} and pass the data type as a parameter 
   -->There are twp type of template:
        1.Class Template
        2.Function Template    
       */
     #include<iostream>
     using namespace std;
     template <class T>
     T findmax(T a,T b,T c)
     {
        if(a>b)
        {
            if(a>c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
        else
        if(b>c)
        {
            return b;
        }
        else{
            return c;
        }
     }
     main()
     {
        int choice;
        cout<<"\n-------------------main-----------------\n\n";
        cout<<"\n1.Integer";
        cout<<"\n2.float";
        cin>>choice;
        switch(choice)
        {
            case 1:
              int num1,num2,num3,ans;
              cout<<"Enter num1";
              cin>>num1;
              cout<<"Enter num2";
              cin>>num2;
              cout<<"Enter num3";
              cin>>num3;
              ans=findmax(num1,num2,num3);
              cout<<"\nans=="<<ans;
              break;

            case 2:
            
               float num1,num2,num3,ans;
              cout<<"Enter num1";
              cin>>num1;
              cout<<"Enter num2";
              cin>>num2;
              cout<<"Enter num3";
              cin>>num3;
              ans=findmax(num1,num2,num3);
              cout<<"\nans=="<<ans;
              default :
              break;
        }

     } 