#include<iostream>
using namespace std;
class address
{
	string addressline;
	string city;
	string state;
	int pincode;
	public:void adress(string addressline,string city,string state,int pincode)
	{
		this->addressline=addressline;
		this->city=city;
		this->state=state;
		this->pincode=pincode;
	}
};
class employee
{
	string name;
	char gender;
	int contactno;
	public:void employee(string name,char gender,int contactno)
	{
		this->name=name;
		this->gender=gender;
		this->contactno=contactno;
	}
};
class report:public address,public employee
{
	public:void show()
	{
		display()
	}
};
int main()
{
	report r1;
    r1.show();
}