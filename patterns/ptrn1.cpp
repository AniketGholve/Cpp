#include<bits/stdc++.h>
using namespace std;
void ptrn()
{
		int i,j,r,sum=1;
		cin>>r;
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=i;j++)
			{
				cout<<"*";
			}
			int space=2*r-2*i+1;
			for(j=1;j<space;j++)
			{
				cout<<" ";
			}
			for(j=1;j<=i;j++)
			{
			cout<<"*";	
			}
			
			cout<<endl;
		}
		for(i=r;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				cout<<"*";
			}
			int space=2*r-2*i+1;
			for(j=1;j<space;j++)
			{
				cout<<" ";
			}
			for(j=1;j<=i;j++)
			cout<<"*";
			cout<<endl;
		}
} 	
int main()
{
	ptrn();
}
