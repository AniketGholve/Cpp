#include<iostream>
using namespace std;
void steps()
{
	int n,count=0;
	cout<<"enter the number : ";
	cin>>n;
	while(n>0)
	{
		if(n%2==0)
		{
			n=n/2;
			count++;
		}
		else
		{
			n=n-1;
			count++;
		}
	}
	cout<<count;
}
int main()
{
	steps();
}
