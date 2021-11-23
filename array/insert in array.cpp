#include<iostream>
using namespace std;
#define len 50
void insert_between()
{
	int arr[len]={1,2,3,4,5};
	int size=5;
	int n,k,div;
	cout<<"entre the position to insert : ";
	cin>>n;
	cout<<"enter the value : ";
	cin>>k;
	if(n<0||n>len)
	{
		cout<<"you cannot insert values"<<endl;
	}
	else if(arr[n]==NULL)
	{
		arr[n]=k;
		cout<<"inserted at null place"<<endl;
		
		size=n+1;
	}
	else
	{
		int size1=size;
		while(size1>=n)
		{
			arr[size1+1]=arr[size1];
			size1--;
		}
		arr[n]=k;
		size++;
	}
	cout<<"entre the position  to delete";
	cin>>div;
	int dil_num=arr[div];
	for(int i=div;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	cout<<"element deleted is : "<<dil_num<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	insert_between();
}
