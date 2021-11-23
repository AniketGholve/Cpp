#include<iostream>
using namespace std;
class name
{
	public:
	void multiply()
	{
		cout<<"Entre the number for Multiplication table : ";
		int mul;
		cin>>mul;
		for(int i=1;i<=10;i++)
		{
			cout<<mul<<" X "<<i<<" = "<<mul*i<<endl;
		}	
	}	
};
int main()
{
	name o;
	o.multiply();
}
