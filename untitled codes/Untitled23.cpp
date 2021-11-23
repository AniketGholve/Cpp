#include<iostream>
using namespace std;
class name
{
	public:
	void digit()
	{
		int dig,dig1,dig2,add,mul;
		cout<<"Enter the digit : ";
		cin>>dig;
		dig1=dig%10;
		dig=dig/10;
		dig2=dig%10;
		
		add=dig1+dig2;
		mul=dig1*dig2;
		cout<<"Addition of Digits is: "<<add<<endl;
		cout<<"Multiplication of Digits is: "<<mul<<endl;
	}
};
int main()
{
	name o;
	o.digit();
}
