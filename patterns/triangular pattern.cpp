#include<iostream>
using namespace std;
void half_triangle(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}	
}
void inverted_half_triangle(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void hollow_inverted(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			if(i==1||i==n||j==i||j==n)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
void full_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
void inverted_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
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
void hollow_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			if(k==i||k==1||i==1||i==n)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Entre the size of triangle : ";
	cin>>n;
		half_triangle(n);
		cout<<endl;
		inverted_half_triangle(n);
		cout<<endl;
		hollow_inverted(n);
		cout<<endl;
		full_pyramid(n);
		cout<<endl;
		inverted_pyramid(n);
		cout<<endl;
		hollow_pyramid(n);
}
