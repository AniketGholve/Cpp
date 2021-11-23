#include<iostream>
using namespace std;
void linear_search(int k,int arr[],int n)
{
	int count=0;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==k)
		{
			count=1;
			break;
		}
		else
		{
			count=0;
		}
	}
	if(count==1)
	{
			cout<<"key found"<<endl;
	}
	else
	{
			cout<<"key not found"<<endl;
	}
}
void binary_search(int k,int arr[],int n)
{
	int s=1,key=k,count=0;
	while(s<=n)
	{
		int mid=(s+n)/2;
		if(key==arr[mid])
		{
			count=1;
			break;
		}
		else if(key>arr[mid])
		{
			s=mid+1;
		}
		else if(key<=arr[mid])
		{
			n=mid-1;
		}
	}
	if(count==1)
	{
		cout<<"Key Found"<<endl;
	}
	else
	{
		cout<<"Key Not Found"<<endl;
	}
}
int main()
{
	int arr[10]={1,2,5,6,7,9,10,15,16,20};
	//linear_search(10,arr,10);
	binary_search(15,arr,10);
}
