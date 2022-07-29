/*8.Define a class to represent lecture details. Include the following members and the
program should handle at lest details of 5 lecturer.
Data members
Name of the lecturer
Name of the subject
Name of course
Number oflecturers
Data functions
To assign initial values
To add a lecture details
To display name and lecture details*/
#include<iostream>
using namespace std;
class lecture
{
   char name[30],course[30],topic[30];
   int id;
   float time;
    public :
    void assign_detail()
    {
        cout<<"\nEnter Name :";
        cin>>name
        cout<<"\nEnter id";
        cin>>id
        cout<<"\nEnter course";
        cin>>course
    }
    void add_lecture()
    {
        cout<<"\nEnter id";
        cin>>id;
        cout<<"\nEnter course";
        cin>>course;
        cout<<"\nEnter topic";
        cin>>topic;
        cout<<"Enter Lecture time";
        cin>>time;
    }
    void display_lecturer()
    {
     cout<<"NAME::"<<name;
     cout<<"\ncourse::"<<course;
     cout<<"\ntopic::"<<topic;
     cout<<"\ntime::"<<time;

    }
    void display_H()
    {
        cout<<"\nLecturer Name::"<<name;
        cout<<"\ncourse::"<<course;
        cout<<"\nTopic::"<<topic;
        cout<<"\nTime::"<<time;
    }


};
main()
{
    lecture l1;
    l1.assign_detail();
    l1.add_lecture();
    l1.display_lecturer();
    l1.display_H();
    

}