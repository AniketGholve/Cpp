#include<bits/stdc++.h>
using namespace std;
void panelty()
{
	int n,j=0,sum=0;
	cout<<"enter the size : ";
	cin>>n;
	int arr[n];
	cout<<"enter the array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n); 
	
	while(j+1!=n)
	{
		sum=sum+abs(arr[j+1]-arr[j]);
		cout<<arr[j]<<" ";
		j++;
	}
	cout<<arr[j];
	cout<<endl<<sum;
}
int main()
{
	panelty();
}
