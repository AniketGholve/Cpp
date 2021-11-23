#include<iostream>
using namespace std;
void number()
{
	int n,count=1;
	cout<<"entre the number : ";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=0;
		}
	}
	if(count==1)
	{
		cout<<"it is prime number"<<endl;
	}
	else
	{
		cout<<"not a prime"<<endl;
	}
}
void total_prime()
{
	int n,count=1;
	cout<<"entre the number : ";
	cin>>n;	
	int p=2;
	for(int i=1;i<n;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(p%j==0)
			{
				count=0;
				break;
			}
		}
		if(count==1)
		{
			cout<<p<<" ";
			p++;
		}	
		else{
			count=1;
			p++;
		}
	}
}
int main()
{
	//number();
	total_prime();
}
