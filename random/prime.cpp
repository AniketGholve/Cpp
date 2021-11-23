#include<iostream>
using namespace std;
void prime()
{
	int n,count=1;
	cout<<"Entre the number: ";
	cin>>n;
	int p=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<p;j++)
		{
			if(p%j==0)
			{
				count=0;
				break;
			}
		}
		if(count==1)
		{
			cout<<p;
			p++;
		}
		else
		{
			count=1;
			p++;
		}
	}
}
int main()
{
	prime();
}
