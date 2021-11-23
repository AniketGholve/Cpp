#include<iostream>
using namespace std;
int fun(int n1,int n2[])
{
	int count=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=i+1;j<n1;j++)
		if(n2[i]>n2[j])
		{
			count=count+1;
		}
	}
	cout<<count;
}
int main()
{
	int n1=5;
	int n2[n1]={1,1,3,6,2};
	fun(n1,n2);
}
