#include<iostream>
#include<cmath>
using namespace std;
void long_sub()
{
	int arr[14]={10,7,4,6,8,10,12,15,14,13,12,11,10,9};
	int pd=arr[0]-arr[1];
	int count=2;
	int ans=2;
	for(int i=0;i<14;i++)
	{
		int pd1=arr[i]-arr[i+1];
		if(pd==pd1)
		{
			count++;
		}
		else
		{
			pd=pd1;
			count=2;	
		}
		ans=max(ans,count);	
	}
	cout<<ans<<endl;
}
void record_break()
{
	int arr[8]={10,13,12,11,16,15,2,2}; 
	int ans=0;
	for(int i=0;i<8;i++)
	{
		if(ans<arr[i])
		{
			ans=0;
			ans=arr[i];
		}
	}
	cout<<"RECORD BREAKING DAY MEMBERS : "<<ans<<endl;
}
int main()
{
	//long_sub();
	record_break();
}
