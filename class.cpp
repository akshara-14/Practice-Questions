// Akshara Johari
// 201378

#include <iostream>
#include <string>
using namespace std;

class student
    {
        
  public:
  
    int Roll_Number,year,semester;
    string department;
    
    student()
    {
        Roll_Number = 0;
        department = "";
        year = 0;
        semester = 0;
    }
    
    void details()
    {
        cout<<"Enter Roll Number of Student: ";
        cin>>Roll_Number;
        cout<<"Enter Department of the Student: ";
        cin>>department;
        cout<<"Enter Year : ";
        cin>>year;
        cout<<"Enter Semester of the Student: ";
        cin>>semester;
    }
    
    void display()
    {
        cout<<"\n";
        cout<<"Student Roll Number is: "<<Roll_Number<<endl;
        cout<<"Department is: "<<department<<endl;
        cout<<"Year is: "<<year<<endl;
        cout<<"Semester is: "<<semester<<endl;
    }
    
};

int main()
{
    student s;
    int i;
    
    s.details();
    
    s.display();
    
    return 0;
}