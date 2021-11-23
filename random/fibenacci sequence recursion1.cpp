#include<iostream>
using namespace std;
int rec(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return rec(n-1)+rec(n-2);
	}
}
int main()
{
	cout<<rec(-20);
}
