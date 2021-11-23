#include<iostream>
using namespace std;
int part(int arr[],int l,int h)
{
	int pivot=arr[l];
	int i=l-1,j=h+1;
	while(i<j)
	{
		do
		{
			i++;
		}while(arr[i]<=pivot);
		do
		{
			j--;
		}while(arr[j]>pivot);
		if(i<j)
		{
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[l],arr[j]);
	return j;
}
void quick_sort(int arr[],int l,int h)
{
		if(l<h)
		{
			int p=part(arr,l,h);
			quick_sort(arr,l,p-1);
			quick_sort(arr,p+1,h);
		}
}
void display(int arr[])
{
	int i=0;
	while(i<10)
	{
		cout<<arr[i]<<" ";
		i++;
	}
}
int main()
{
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	quick_sort(arr,0,10);
	display(arr);
}
