#include<iostream>
using namespace std;
class bank
{
	string name;
	int accountno;
	int contactno;
	public:void input()
	{
		cout<<"enter your name: "<<endl;
		cin>>name;
		cout<<"enter your account no:"<<endl;
		cin>>accountno;
		cout<<"enter your contact number:"<<endl;
		cin>>contactno;
	}
	void display()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"ACCOUNTNO:"<<accountno<<endl;
		cout<<"CONTACTNO:"<<contactno<<endl;
	}
	
	
};
int main()
{
	bank b1;
	b1.input();
	b1.display();
	return 0;
}
