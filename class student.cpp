#include<iostream>
using namespace std;
class student
{
	string name;
	int standard;
	int rollno;
	int admission_no;
	public:void input()
	{
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your class"<<endl;
		cin>>standard;
		cout<<"enter your rollno:"<<endl;
		cin>>rollno;
		cout<<"enter your admission no:"<<endl;
		cin>>admission_no;
	}
	void display()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Class:"<<standard<<endl;
		cout<<"Rollno:"<<rollno<<endl;
		cout<<"Admission no:"<<admission_no<<endl;
	}
};
int main()
{
	student s1;
	s1.input();
	s1.display();
}