#include<iostream>
using namespace std;
void insertation()
{
	int arr[]={5,4,10,1,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
}
int main()
{
	insertation();
}
