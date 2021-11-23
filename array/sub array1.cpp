#include<iostream>
using namespace std;
void sum()
{
	int arr[]={5,1,2,3,-4};
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
	int sum[n]={0},flag=0;
	for(int i=0;i<n;i++)
	{
		sum[i]=sum[i-1]+arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(sum[i]==sum[j])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}	
		if(flag==1)
		{
			break;
		}
	}
	if(flag==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
}
int main()
{
	sum();
}
