#include<iostream>
using namespace std;
int sum()
{
	int arr[5]={1,2,3,7,5};
	int sn=-1,en=-1,j=0,i=0,sum=0,ans=12;
	while(j<=5 && sum+arr[j]<=ans)
	{
		sum+=arr[j];
		j++;
	}
	if(sum==ans)
	{
		cout<<i+1<<j<<endl;
		return 0;
	}
	while(j<=5)
	{
		sum=sum+arr[j];
		while(sum>ans)
		{
			sum=sum-arr[i];
			i++;
		}
		if(sum==ans)
		{
			sn=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	cout<<sn<<" "<<en<<endl;
}
int main()
{
	sum();
}
