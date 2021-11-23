#include<bits/stdc++.h>
using namespace std;
void max_min(int arr1[],int n)
{
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr1[i]>max)
		{
			max=arr1[i];
		}
		if(arr1[i]<min)
		{
			min=arr1[i];
		}
	}
	cout<<max<<endl<<min;
}
int main()
{
	int arr[10]={12,2,3,4,5,6,7,8,9,100};
	max_min(arr,10);
}
