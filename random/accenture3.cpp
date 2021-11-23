#include<iostream>
using namespace std;
void rats()
{
	int r,units,n,arr[100];
	cout<<"enter rats: ";
	cin>>r;
	cout<<"enter units: ";
	cin>>units;
	cout<<"enter houses: ";
	cin>>n;
	cout<<"enter rats in houses: ";
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	int total_foods=r*units;
	int i=0,sum=0,count=0;
	while(sum<=total_foods && i<n)
	{
		count=i;
		sum=sum+arr[i];
		i++;
	}
	cout<<count;
}
int main()
{
	rats();
}

