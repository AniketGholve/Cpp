#include<iostream>
using namespace std;
void amstrong(int n)
{
	int n1=n,count=0,ams=0,ans=0;
	while(n1>0)
	{
		ams=n1%10;
		ans=ans+(ams*ams*ams);
		n1=n1/10;
	}
	cout<<ans;
}
int main()
{
	amstrong(153);
}
