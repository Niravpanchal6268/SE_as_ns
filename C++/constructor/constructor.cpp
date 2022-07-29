//Constructor overloading
#include<iostream>
using namespace std;

class student
{
	public :
		 student()
		 {
		 	cout<<"\nHello";
		 }
		 student(int marks ,int age)
		 {
		 	cout<<"\nYour scrore is ::"<<marks;
		 	cout<<"\nyour Age::"<<age;
		 }
		 student (char name[20],char sub[20])
		 {
		 	cout<<"\nyour name ::"<<name;
		 	cout<<"\nyour subject is ::"<<sub;
		 }
	
};
main()
{
	student s;
	student obj(5,7);
	student info("Nirav","C++");
	
	
}