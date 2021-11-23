#include<bits/stdc++.h>
using namespace std;
int gcd(int a ,int b)
{
	int num1=a,num2=b;
	int num3=min(num1,num2);
	int hcf=1;
	for(int i=1;i<=num3;i++)
	{
		if(num1%i==0 &&num2%i==0)
		{
			hcf=i;
		}
	}
	return hcf;
}
int lcm1(int a,int num1,int num2)
{
	int hcf=a;
	int lcm=(num1*num2)/hcf;
	return lcm;
}
int main()
{
	int num1,num2;
	cout<<"Entre the number 1: ";
	cin>>num1;
	cout<<"Enter the number 2: ";
	cin>>num2;
	int hcf=gcd(num1,num2);
	cout<<"GCD OF THE NUMBER IS : "<<hcf<<endl;
	int lcm=lcm1(hcf,num1,num2);
	cout<<"LCM OF THE NUMBER IS : "<<lcm<<endl;
}
