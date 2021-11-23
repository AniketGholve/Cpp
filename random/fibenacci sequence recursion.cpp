#include<iostream>
using namespace std;
int fib(int prev,int next)
{
	int n;
	cout<<"enter the number";
	cin>>n;
	int i=2,s=0;
	if(n==1)
	{
		cout<<s;
	}
	else if(n==2)
	{
		cout<<next;
	}
	else
	{
		while(i<n)
		{
			s=next+prev;
			prev=next;
			next=s;
			i++;
		}
		cout<<s;
	}
}

int main()
{
	int x,i=1;
	fib(0,1);
}
