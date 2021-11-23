#include<iostream>
using namespace std;
void number_triangle(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void inverted_triangel(int n)
{
	for(int i=1;i<=n;i++)
	{
		int count=1;
		for(int j=n;j>=i;j--)
		{
			cout<<count++<<" ";
		}
		cout<<endl;
	}
}
void hollow_triangle(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1||j==i||i==1||i==n)
			cout<<j<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}
void full_triangle(int n)
{
	int count=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		int y=i;
		for(int k=1;k<=i;k++)
		{
			cout<<y++;
		}
		count=(i*2)-1;
		for(int l=2;l<=i;l++)
		{
			cout<<--count;
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
		for(int j=1;j<=i;j++)
		{
			if(j==1||j==i||i==1||i==n)
			 cout<<j<<" ";
			 else
			 cout<<"  ";
		}
		cout<<endl;
	}
}
void hollow_inverted(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		int count1=count;
		count++;
		for(int j=n;j>=i;j--)
		{
			if(j==n||j==i||i==1||i==n)
			 cout<<count1;
			 else
			 cout<<" ";
			 count1++;
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Entre the size of triangle : ";
	cin>>n;
	// number_triangle(n);
	// inverted_triangel(n);
	// hollow_triangle(n);
	// full_triangle(n);
	//hollow_pyramid(n);
	hollow_inverted(n);
}
