#include<iostream>
using namespace std;
void max_till_i(int arr[],int n)
{
	int temp=arr[0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(temp<arr[j])
			{
				temp=arr[i];
			}
		}
		cout<<temp;
	}
}
int main()
{
	int arr[6]={0,-9,1,3,-4,5};
	max_till_i(arr,6);
}
