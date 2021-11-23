#include<iostream>
using namespace std;
int ans(int n)
{
	int ans=0;
	while(n%2==0)
	{
		n=n/2;
		ans=2;
	}
	for(int i=3;i<=n;i+=2)
	{
		while (n % i == 0)
        {
            n = n/i;
        	ans=i;
		}
	}		
	return ans;
}
int main()
{
	cout<<ans(770);
}
