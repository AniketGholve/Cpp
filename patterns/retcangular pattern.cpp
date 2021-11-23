#include<iostream>
using namespace std;
void rectangle(int r,int c)
{
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cout<<"* ";		
		}
		cout<<endl;
	}	
}
void hollow_rect(int r,int c)
{
	for(int i=1;i<=r;i++)
	{
		for(int j=0;j<=c;j++)
		{
			if(i==1 ||i==r ||j==0||j==c)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int c,r;
	cout<<"Entre the Rows : ";
	cin>>r;
	cout<<"Entre the Column : ";
	cin>>c;
	rectangle(r,c);
	hollow_rect(r,c);
}
