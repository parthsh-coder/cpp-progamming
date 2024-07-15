#include<iostream>
using namespace std;
class information
{
	string name;
	int moblie_no;
	string address;
	public:void input()
	{
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your moblie no.:"<<endl;
		cin>>moblie_no;
		cout<<"enter your address:"<<endl;
		cin>>address;
		
	}
	void display()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"MOBILENO:"<<moblie_no<<endl;
		cout<<"ADDRESS"<<address<<endl;
	}
};
int main()
{
	information i1;
	i1.input();
	i1.display();
	return 0;
}