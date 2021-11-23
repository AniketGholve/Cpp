#include<iostream>
using namespace std;
void smallest_number()
{
	int n=6;
	int arr[n]={-9,0,1,3,-4,5};
	int j=0,count=0;
	while(j<n)
	{
		if(count>arr[j])
		{
			count=arr[j];
		}
		j++;
	}
	j=0;
	while(j<=n)
	{	
		if(count<0)
		{
			count=0;
		}
		if(count==arr[j] && count>=0)
		{
			j=0;
			count++;
		}
		j++;
	}
	cout<<count;
}
int main()
{
	smallest_number();
}
