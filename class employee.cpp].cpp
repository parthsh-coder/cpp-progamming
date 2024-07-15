#include<iostream>
using namespace std;
class employee
{
	string name;
	int contactno;
	string address;
	float salary;
	public:void input()
	{
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your contactno.:"<<endl;
		cin>>contactno;
		cout<<"enter your address:"<<endl;
		cin>>address;
		cout<<"enter your salary:"<<endl;
		cin>>salary;
	}
	void display()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"CONTACTNO."<<contactno<<endl;
		cout<<"ADDRESS:"<<address<<endl;
		cout<<"SALARY:"<<salary<<endl;
	}
};
int main()
{
	employee e1;
	e1.input();
	e1.display();
	return 0;
}
