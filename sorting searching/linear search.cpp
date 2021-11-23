#include<iostream>
using namespace std;
void linear_search(int k)
{
	int n;
	int count=0;
	int arr[10]={1,2,3,4,5,6,8,9,10};
	n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			cout<<"Element found at position : "<<i+1<<endl;	
			count=1;
			break;	
		}
		else
		{
			count=0;
		}
	}
	if(count==0)
	{
		cout<<"Element not found"<<endl;
	}
}
void binary_search(int k)
{
	int n,i=0;
	int count=0;
	int arr[10]={1,2,3,4,5,6,8,9,10};
	n=sizeof(arr)/sizeof(arr[0]);
	while(i<n)
	{
		int mid=(i+n)/2;
		if(k==arr[mid])
		{
			cout<<"Element found at position "<<mid+1<<endl;
			count=1;
			break;
		}
		else if(k<arr[mid])
		{
			n=mid-1;
		}
		else
		{
			i=mid+1;
		}
	}
	if(i==n)
	{
		cout<<"Element not found"<<endl;
	}
}
int main()
{
	//linear_search(7);
	binary_search(11);
}
