#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<t;i++)
	{
		int k=cbrt(arr[i]);
		int sum=k*k*k;
		if(sum==arr[i])
		{
			count++;
		}
	}
	cout<<count;
}
