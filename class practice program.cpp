#include<iostream>
using namespace std;
class Mouse
{
	string name;
	string model;
	int price;
	string warenty;
	
	public:void input()
	{
		cout<<"enter mouse name:"<<endl;
		cin>>name;
		cout<<"enter mouse model:"<<endl;
		cin>>model;
		cout<<"enter price of mouse:"<<endl;
		cin>>price;
		cout<<"warenty of mouse:"<<endl;
		cin>>warenty;
		
	}
	void display()
	{
		cout<<"mouse name:"<<name<<endl;
		cout<<"mouse model:"<<model<<endl;
		cout<<"mouse price:"<<price<<endl;
		cout<<"mouse warenty:"<<warenty<<endl;
	}
	
};
int main ()
{
	Mouse m1;
	m1.input();
	m1.display();
	return 0;
	
	
}