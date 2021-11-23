#include<iostream>
using namespace std;
void dice()
{
	int n;
	cout<<"Enter the sum : ";
	cin>>n;
	int count=0;
	int arr[]={1,2,3,4,5,6};
	for(int i=0;i<6;i++)
	{
		for(int j=i;j<6;j++)
		{
			if(arr[i]+arr[j]==n)
			{
				count++;
			}
		}
	}
	cout<<count;
}
int main()
{
	dice();
}
