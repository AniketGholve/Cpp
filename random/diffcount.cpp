#include<iostream>
#include<cstdlib>
using namespace std;
int findCount(int arr[],int length,int num, int diff)
{
	int count=0;
	for(int i=0;i<length;i++)
	{
		if(abs(num-arr[i])<=diff)
		{
			count++;	
		}	
	}
	cout<<count;	
}

int main()
{
	int arr[100],n,num,diff;
	cout<<"enter the number of element in array : ";
	cin>>n;
	if(n==0)
	{
		cout<<"Entre 1 or above";
	}
	cout<<"Entre the Element into Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"entre the number";
	cin>>num;
	cout<<"entre the dirfference";
	cin>>diff;
	findCount(arr,n,num,diff);
}
