#include<iostream>
#include<cmath>
using namespace std;
void set_bit()
{
	int n,set;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter set :";
	cin>>set;
	int i=0,sum=0;
	while(i<pow(2,n))
	{
		int k=i,count=0;
		while(k>0)
		{
			if(k&1)
			{
				count++;
			}
			k=k>>1;
		}
		if(count==set)
		{
			sum=sum+i;
		}
		i++;
	}
	
	cout<<sum;
}
int main()
{
	set_bit();
}
