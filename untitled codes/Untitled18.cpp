#include<iostream>
using namespace std;
class name
{
public:	
	void comparemax(int a,int b)
	{
	 a>b?cout<<"num1 >num2":cout<<"num2>num1";
	}
	void comparemin(int a,int b)
	{
		a<b?cout<<"num1<num2":cout<<"num2<num1";
	}
};
int main()
{
	int num1,num2;
	cout<<"entre the two number : ";
	cin>> num1>>num2;
	name o;
	//o.comparemax(num1,num2);
	o.comparemin(num1,num2);
}
