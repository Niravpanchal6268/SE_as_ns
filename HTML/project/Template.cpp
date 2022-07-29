#include<iostream>
using namespace std;

template <class T>

class example{
	 T a,b;
	 public:
	 	void input()
	 	{
	 		cout<<"\nEnter  Value:";
	 		cin>>a>>b;
	 		
		 }
		 void display()
		 {
		 	cout<<"\na ="<<a<<"\n b= "<<b;
		 }
};
main()
{
	example<int> obj;
	cout<<"\n\n---------------For Integer-------------\n\n";
		obj.input();
		obj.display();
		
		example<float> obj2;	
		cout<<"\n\n------------------For Integer-----------\n\n";
		obj2.input();
		obj2.display();
}