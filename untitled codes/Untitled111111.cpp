#include<iostream>
using namespace std;
void steps(int n)
{
	int count=0;
	while(n>0)
	{
		if(n%2==0)
		{
			count++;
			n=n/2;
		}
		else
		{
			count++;
			n=n-1;
		}
	}
	cout<<count;
}
int main()
{
	int i;
	cin>>i;
	steps(i);
}
