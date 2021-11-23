#include<iostream>
using namespace std;
void binary()
{
	int arr[]={5,4,3,2,1,6,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int part(int arr[],int l,int h)
{
	int pivot=arr[l];
	int i=l-1;
	int j=h+1;
	while(i<j)
	{
		do{
			i++;
		}while(arr[i]<=pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i<j)
		{
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[j],arr[l]);
	return j;
}
void quick(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=part(arr,l,h);
		quick(arr,l,p-1);
		quick(arr,p+1,h);
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	//binary();
	int arr[]={5,4,3,2,1,6,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	quick(arr,0,n);
	display(arr,n);
	
}
