#include<iostream>
using namespace std;
class record
{
	int age;
	char gender;
	float salary;
	public:record(int age,char gender,float salary)
	{
		this->age;
		this->gender;
		this->salary;
	}
	void input()
	{
		cout<<"enter your age:"<<endl;
		cin>>age;
		cout<<"enter your gender:"<<endl;
		cin>>gender;
		cout<<"enter your salary:"<<endl;
		cin>>salary;
		
	}
	void display()
	{
		cout<<"Age:"<<age<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"Salary:"<<salary<<endl;
	}
};
int main()
{
	record r1(18,'M',15000.00);
	r1.input();
	r1.display();
	return 0;
}
