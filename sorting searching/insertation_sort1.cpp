#include<iostream>
using namespace std;
void insertion()
{
	int arr[]={5,4,10,1,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(arr[j]>temp && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
			arr[j+1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	insertion();
}
