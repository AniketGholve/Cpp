#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				
			}
			else
			{
				int k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	for (int a=0;a<n;a++)
	{
		cout<<arr[a]<<" ";
	}
}

int  main()
{
	int arr[1000];
	int n,x,k;
	cout<<"enter the length of array: ";
	cin>>n;
	for (int a=0;a<n;a++)
	{
		cout<<"enter the "<<a+1<<" element: "<<endl;
		cin>>arr[a];
	}
	sort(arr,n);
}
