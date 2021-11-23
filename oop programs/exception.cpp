#include<iostream>
#include<string.h>
using namespace std;
class exception
{
	
	public:
	int age;
	float income;
	char *city;
	char *city1="pune";
	char *city2="mumbai";
	char *city3="aurangabad";
	char car[1];
	void read()
	{
	cout<<"enter the age = ";
	cin>>age;
	cout<<"enter the income = ";
	cin>>income;
	cout<<"enter the city you live = ";
	cin>>city;
	cout<<"do you have a car or bike (press y for yes n for no)";
	cin>>car[1];
	}
	exception()
	{
		city=new char[10];
	}
}a;
int main()
{
	a.read();
	try
	{
	if(a.age>=18&&a.age<=55)
	{
		cout<<"age is eligible! "<<a.age<<"\n";
	}
	else
	{
		throw(a.age);
	}
	if(a.income>=10000&&a.age<=100000)
	{
		cout<<"income is eligible! "<<a.income<<"\n";
	}
	else
	{
		throw(a.income);
	}
	if(strcmp(a.city,a.city1)==0||strcmp(a.city,a.city2)==0||strcmp(a.city,a.city3)==0)
	{
		cout<<"you live in proper city \n";	
	}
	else
	{
		throw(a.city);
	}
	if(a.car[1]=='y')
	{
		cout<<"great!!you are eligible!!";
	}
	else
	{
		throw(a.car[1]);
	}
	}
	catch(int a)
	{
		cout<<"age exception";
	}
	catch(float paisa)
	{
		cout<<"income exception";
	}
	catch(char *c)
	{
		cout<<"city exception";
	}
	catch(char b[1])
	{
		cout<<"vehical exception";
	}
	return 0;
}
