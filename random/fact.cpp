#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int fact(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
	return n*fact(n-1)	;
	}
}
int main()
{
	char s[100];
	int n=0,i=0;
	cout<<"entre the string :";
	cin>>s;
	while(s[i]!=NULL)
	{
		i++;
		n++;
	}
	int per=fact(n);
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=i;j<n;j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
		}
		per=per/count;
	}

	cout<<per;
}
