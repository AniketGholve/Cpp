#include<iostream>
using namespace std;
void solid_diamond(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i-1;j++)
		{
			cout<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
void hollow_diamond(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			if(j==1||j==i)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i-1;j++)
		{
			cout<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			if(j==n||j==i)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}
void solid_half_diamond(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Entre the number : ";
	cin>>n;
	solid_diamond(n);
	hollow_diamond(n);
	solid_half_diamond(n);
}
