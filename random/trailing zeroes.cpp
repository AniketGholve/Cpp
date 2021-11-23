#include<iostream>
using namespace std;
void zeroes()
{
	int n,count=0;
	cout<<"enter the number";
	cin>>n;
	if((n/5)<=5)
	{
		count=n/5;
	}
	else
	{
		while(n>5)
		{
			n=n/5;
			count=count+n;
		}
	}
	cout<<count;
}
int main()
{
	zeroes();
}
