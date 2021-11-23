#include<iostream>
using namespace std;
void max_char()
{
	char a[]="shubhamh";
	int n=8;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j] )
			{
				count+=1;	
			}	
		}
		if(sum<count)
		{
			sum=count;
		}
	}
	cout<<sum;
}
int main()
{
	max_char();
}
