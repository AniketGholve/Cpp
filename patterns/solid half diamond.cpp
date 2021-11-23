#include<iostream>
using namespace std;
void solid_number(int n)
{
	int count=2;
	for(int i=1;i<=n;i++)
	{
		++count;
		for(int j=1;j<=i;j++)
		{
			cout<<count;
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		--count;
		for(int j=n-1;j>=i;j--)
		{
			cout<<count;
		}
		cout<<endl;
	}
}
void number_star(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<=i;j++)
		{
			cout<<count<<"*";
		}
		cout<<count++;
		cout<<endl;
	}
	count--;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<count<<"*";
			
		}
		cout<<count--;
		cout<<endl;
	}
}
void sequence_star(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count;
			if(j!=i)
			{
				cout<<"*";
			}
			count++;
		}
		cout<<endl;
	}
	count=count-n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count;
			if(j!=i)
			{
				cout<<"*";
			}
			count++;
		}
		count=(count+1)-(2*i);
		cout<<endl;
	}
}
/*void solid_palindrom(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1)
				cout<<"*";
			cout<<j;
		}
		cout<<endl;
	}
}*/
void solid_palindrom(int n)
{
	for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=i; j++)
				{
					if(j == 1)
						cout <<"*";
					else
					cout << j;
				}
			for(int j=i-1; j>=1;j--)
				{		
					cout << j;
				}
			cout << "*";
			cout << "\n";
		}
}
int main()
{
	int n;
	cout<<"Entre the number : ";
	cin>>n;
	// solid_number(n);
	// number_star(n);
	//sequence_star(n);
	solid_palindrom(n);
}
