#include<iostream>
using namespace std;
void sum(string s)
{
	int i=0;
	int n=s.size();
	int count=0,sum=0;
	while(i<n)
	{
		if(s[i]=='1')
		{
			count+=1;
		}
		else
		{
			if(count>sum)
			{
				sum=count;
			}
			count=0;
		}
		i++;
	}
	cout<<sum;
}
int main()
{
	string s;
	cin>>s;
	sum(s);
}
