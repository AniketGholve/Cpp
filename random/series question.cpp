#include<iostream>
using namespace std;
void series1() 
{
	int n,arr[100];
	cout<<"entre the number : ";
	cin>>n;
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			arr[i]=arr[i-2]*2;
		}
		else
		{
			arr[i]=arr[i-2]*3;
		}
	}
	cout<<"Number at index is:"<<arr[n-1];
}
void series2()
{
	int n,arr[100];
	cout<<"entre the number : ";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i==0||i==1)
		{
			arr[i]=0;
		}
		else if(i%2==0)
		{
			if(i==2)
			{
				arr[i]=2;
			}
			else
			{
				arr[i]=arr[i-2]+2;
			}
		}
		else
		{
			arr[i]=arr[i-2]+1;
		}
	}
	cout<<"Element at index is: "<<arr[n];
	
	
	
	
	
	
	
	
}
int main()
{
	series1();
	series2();
}
