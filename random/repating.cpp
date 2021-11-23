#include<iostream>
using namespace std;
void repeat()
{
	int n1,n2;
	cout<<"enter the range :";
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{
		int arr[10]={0};
		int temp=i;
		int count=1;
		while(temp!=0)
		{	
			if(arr[temp%10])
			{
				count=0;
				break;
			}
			arr[temp%10]=1;			
			temp=temp/10;
		}
		if(count==1)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	repeat();
}
