#include<iostream>
using namespace std;

int main()
{
	int a;
	int k[10]={0};
	cout<<"entre the number";
	cin>>a;
	while(a>0)
	{
		int rem;
		rem=a%10;
		if(k[rem]==1)
		break;
		
		k[rem]=1;
		a=a/10;
	}
	if(a>0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
