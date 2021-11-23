#include<iostream>
using namespace std;
void sub(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=sum+arr[j];	
			cout<<sum<<endl;
		}
	}
cout<<sum;
}
int main()
{
	int arr[3]={1,2,2};
	sub(arr,3);
}
