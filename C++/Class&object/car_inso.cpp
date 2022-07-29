#include<iostream>
#include<string.h>
using namespace std;
class car
{

    string c;   
    string model_name;
    string fuel_type;
    int mileage;
    double long prize;
    public :
     void  setdata()
   {
    cout<<"Company Name : "<<endl;
    cin>>c;
    cout<<"Car MOdel :"<<endl;
    cin>>model_name;
    cout<<"car fuel type:"<<endl;
    cin>>fuel_type;
    cout<<"car mileage:"<<endl;
    cin>>mileage;
    cout<<"car price"<<endl;
    cin>>prize;

     
     }
     void displaydata()
     {   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
         cout<<"\nCAR PROPERTIES"<<endl;
         cout<<"CAR COMPANY ::"<<c<<endl;
         cout<<"CAR MOdel name :"<<model_name<<endl;
         cout<<"CAR FUEL TYPE::"<<fuel_type<<endl;
         cout<<"CAR MILEAGE::"<<mileage<<endl;
         cout<<"CAR PRICE::"<<prize<<endl;
        
     }

};
int main()
{
    
    car car1,car2;
    
    
    car1.setdata();
    car1.displaydata();
    
    car2.setdata();
    car2.displaydata();
    
}