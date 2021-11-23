#include<iostream>
using namespace std;
void size_of()
{
	int a;
	float b;
	double c;
	char d;
	a=12;
	cout<<"size of integer is: "<<sizeof(a)<<endl;
	cout<<"size of float is: "<<sizeof(b)<<endl;
	cout<<"size of double is: "<<sizeof(c)<<endl;
	cout<<"size of character is: "<<sizeof(d)<<endl;
	
}
void datatype()
{
	short int a;
	cout<<"size of short integer is: "<<sizeof(a)<<endl;
	long int b;
	cout<<"size of long integer is: "<<sizeof(b)<<endl;
}
int main()
{
	size_of();
	datatype();
}
