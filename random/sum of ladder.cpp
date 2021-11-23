#include<iostream>
using namespace std;
void sumr()
{
	int arr[]={55,66,64,36,45,24,32};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=n,sum=0;
	while(i>=0)
	{
		int count=0;
		int j=n;
		while(j>i)
		{
			if(arr[i]>arr[j])
			{
				count=1;
			}
			else
			{
				count=0;
			}
			j--;
		}
		if(count==1)
		{
			sum= sum+arr[i];	
		}
		i--;
	}
	cout<<sum;
}
int main()
{
	sumr();
}
