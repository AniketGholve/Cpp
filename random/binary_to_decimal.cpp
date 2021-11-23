#include<iostream>
using namespace std;
void b_to_d(int n)
{
	int ans=0, n2=1;
	while(n>0)
	{
	    int n1=n%10;
	    
	    	ans=ans+n1*n2;
	    	n2*=2;
	 	n=n/10;
	}
	cout<<ans<<endl;
}
/*void d_to_b(int n)
{
	int x=1,ans=0;
	while(x<=n)
	{
		x=x*2;
	}
	x/=2;
	while(x>0)
	{
		int last=n/x;
		n-=last*x;
		x/=2;
		ans=ans*10+last;
	}
	cout<<ans<<endl;
}*/
void d_to_o(int n)
{
	int q=n,ans=0,n1=1;
	while(q>0)
	{
		int r=q%8;
		r=r*n1;
		ans=ans+r;
		q=q/8;
		n1=n1*10;
	}
	cout<<ans;
}
int main()
{
    //b_to_d(11111);
    d_to_o(1866);
    return 0;
}
