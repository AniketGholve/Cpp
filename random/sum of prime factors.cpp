#include<iostream>
using namespace std;
void prime()
{
	int n,sum=0;
	cout<<"ENTER THE NUMBER :";
	cin>>n;
	cout<<"FACTORS ARE: ";
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			int count=1;
			for(int j=2;j<i;j++)
			{
				if(i%j!=0)
				{
					count=1;
				}
				else
				{
					count=0;
					break;
				}
			}
			cout<<i<<" ";
			if(count==1)
			{
				sum=sum+i;
			}
		}
	}
	cout<<endl<<"SUM OF PRIME FACTOR ARE :"<<sum;
}
int main()
{
	prime();
}
