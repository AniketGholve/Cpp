#include<iostream>
#include<string.h>
using namespace std;
int output(int s[],int num)
{
	int i=0;
	while(s[i])
	{
		
		if(s[i]>1 || s[i]<0)
		{
			cout<<"Invalid output";
			break;
		}
		else
		{
			cout<<"valid output";
		}
		i++;
	}

}
int main()
{
	int arr[100];
	int n;
	cout<<"Enter the String : ";
	cin>>arr[100];
	cout<<"Entre the Number : ";
	cin>>n;
	cout<<arr;
	output(arr,n);
}
