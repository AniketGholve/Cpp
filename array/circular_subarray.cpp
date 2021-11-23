#include<iostream>
using namespace std;
void circular_subarray()
{
	int n=7;
	int arr[n]={4,-4,6,-6,10,-11,12};
	int max_sum=INT_MIN,cur_sum=0,cur_sum1=0;
	 for(int i=0;i<n;i++)
	 {
	 	cur_sum1=cur_sum1+arr[i];
	 }
	 for(int i=0;i<n;i++)
	 {
	 	arr[i]=arr[i]*-1;
	 	cur_sum+=arr[i];
	 	if(cur_sum<0)
	 	{
	 		cur_sum=0;
		}
		max_sum=max(max_sum,cur_sum);
	 }
	 max_sum=max_sum+cur_sum1;
	 cout<<max_sum<<endl;
}
bool pair_sum()
{
	//need sorted array;
	int low=0,high=8;
	int arr[]={1,2,3,4,5,6,7,8};
	int k=6;
	while(low<high)
	{
		if(arr[low]+arr[high]==k)
		{
			cout<<low<<" "<<high<<endl;
			break;
		}
		else if(arr[low]+arr[high]<k)
		{
			low++;
		}
		else
		{
			high--;
		}
		
	}
}
int main()
{
	circular_subarray();	
	pair_sum();
}

