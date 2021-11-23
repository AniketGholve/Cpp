#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,r,n;
	cin>>a>>r>>n;
	int sum=pow(r,n-1);
	int sum2=sum*a;
	cout<<sum2;
}
