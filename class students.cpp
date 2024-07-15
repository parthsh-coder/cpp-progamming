#include<iostream>
using namespace std;
class school
{
	string name;
	string standard;
	int rollno;
	float fee;
	public:void input()
	{
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your class:"<<endl;
		cin>>standard;
		cout<<"enter your rollno.:"<<endl;
		cin>>rollno;
		cout<<"enter your fee:"<<endl;
		cin>>fee;
		
	}
	void display()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"CLASS:"<<standard<<endl;
		cout<<"ROLLNO.:"<<rollno<<endl;
		cout<<"FEE:"<<fee<<endl;
	}
};
int main()
{
	school s1;
	s1.input();
	s1.display();
	return 0;
}
