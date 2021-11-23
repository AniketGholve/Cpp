#include<iostream>
using namespace std;
int search(int arr[],int k,int x)
{
	int y1=0;
	int i;
	for(i=0;i<k;i++)
	{
		if(arr[i]==x)
		{
			y1=1;
			break;
		}
		else
		{
			y1=0;
		}
	}
	if(y1==1)
	{
		cout<<"Element Found At Position : "<<i+1;
	}
	else
	{
		cout<<"Element Not Found";
	}
}
int  main()
{
	int arr[1000];
	int n,x,k;
	cout<<"enter the length of array: ";
	cin>>n;
	for (int a=0;a<n;a++)
	{
		cout<<"enter the "<<a+1<<" element: "<<endl;
		cin>>arr[a];
	}
	cout<<"Enter The Number To Search : ";
	cin>>x;		

	search(arr,n,x);

}
