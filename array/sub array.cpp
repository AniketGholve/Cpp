#include<iostream>
using namespace std;
void subarr()
{
	int n=5;
	int arr[n]={-11,-4,-3,-2,-10};
	int i=0,j=0,k=i,sum=INT_MIN,sum1=0;;
	while(k<=j && j<n)
	{
		//cout<<arr[k]<<" ";
		sum1=sum1+arr[k];
		if(k<j)
		{
			k++;	
		}
		else if(k==j)
		{
			j++;
			k=i;
			//cout<<endl;	
			if(sum1>sum)
			{
				sum=sum1;
			}
			sum1=0;		
		}
		if(j==n)
		{
			i++;
			j=i;
			k=i;
		}		
	}
	cout<<sum;
}
void kadane()
{
	int n=5;
	int arr[n]={1,-4,3,2,1};
	int max_sum=INT_MIN;
	int current_sum=0;
	for(int i=0;i<n;i++)
	{
		current_sum+=arr[i];
		if(current_sum<0)
		{
			current_sum=0;	
		}
		max_sum=max(max_sum,current_sum);	
	}
	cout<<max_sum;	
}
int main()
{
	subarr();
	kadane();
}
