#include<iostream>
using namespace std;
void selection_sort()
{
	int arr[]={5,4,10,1,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	selection_sort();
}
