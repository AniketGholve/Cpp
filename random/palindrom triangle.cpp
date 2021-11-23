#include<iostream>
using namespace std;
void palindrom_triangle(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		int count=0;
		count=count+i;
		for(int j=2;j<=i;j++)
		{
			cout<<--count;
		}
		cout<<endl;
	}
}
void palindrom_alphabet(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			char a=64+j;
			cout<<a;
		}
		int k=i;
		for(int j=2;j<=i;j++)
		{
			k--;
			char a=64+k;
			cout<<a;
		}
		cout<<endl;
	}
}
void palindrom_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"  ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		int k=i;
		for(int j=2;j<=i;j++)
		{
			cout<<--k<<" ";
		}
		cout<<endl;
	}
}
void palindrom_star(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n+3;j>=i;j--)
		{
			cout<<"*";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<i<<"*";
		}
		for(int j=n+2;j>=i;j--)
		{
			cout<<"*";
		}
		//cout<<"*";
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Entre the number : ";
	cin>>n;
	// palindrom_triangle(n);
	// palindrom_alphabet(n);
	// palindrom_pyramid(n);
	palindrom_star(n);
}
