#include<iostream>
using namespace std;
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		int count=0;
		for(int k=l;k<=r;k++)
		{
			if(arr[j]!=k)
			{
				count=1;	
			}
			else
			{
				count=0;
				break;
			}
		}
		if(count==1)
		cout<<arr[j]<<" ";
	}
}
