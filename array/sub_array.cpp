#include<iostream>
using namespace std;
void sub_arr()
{
	int n=5,sum=12,st=-1,en=-1,j=0;
	int arr[n]={1,2,3,7,5};
	int ans=0;
	while(j<n && ans+arr[j]<=sum)
	{
		++en;
		ans=ans+arr[en];
		j++;
	}
	if(ans==sum)
	{
		cout<<st<<en<<endl;
	}
	while(j<n)
	{
		if(ans>sum)
		{
			++st;
			ans=ans-arr[st];
		}
	}
}
int main()
{
	sub_arr();
}
