#include<iostream>
using namespace std;
void fibenacci(int n)
{
	int sum=0;
	int t1=0,t2=1,nextTerm;
	for(int i=0;i<n;i++)
	{
		cout<<t1<<" ";
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
}
 int fact(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}
void binomial_coff(int n,int r)
{
	int k=fact(n)/(fact(r)*fact(n-r));
	cout<<k;
}
void pascal_pattern(int n)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			int k=fact(i)/(fact(j)*fact(i-j));
			cout<<k;
		}
		cout<<endl;
	}
}
void b_to_d(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
		int y=n%10;
		ans+=x*y;
		x=x*2;
		n=n/10;
	}
	cout<<ans;
}
int main()
{
//	fibenacci(5);
//	fact(6);
//binomial_coff(5,2);
//pascal_pattern(5);
b_to_d(1011);
}
