#include<iostream>
using namespace std;
void all_prime(int s,int n)
{
	int count=1;
	for(int i=s;i<=n;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count=0;
			}
		}
		if(count==1)
		{
			cout<<i<<" ";
		}
		else
		{
			count=1;
		}
	}
}
int main()
{
	all_prime(15,30);
}
