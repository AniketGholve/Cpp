#include<iostream>
using namespace std;
int main()
{
	int n=1234;
	while(n>0)
	{
		cout<<n%10;
		n=n/10;	
	}	
}
