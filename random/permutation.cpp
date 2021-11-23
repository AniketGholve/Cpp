#include<iostream>
using namespace std;

int per(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n*per(n-1);	
	}
	
}
int main()
{
	char str[100];
	cout<<"entre the string : ";
	cin>>str;
	int n=0;
	while(str[n]!='\0')
	{
		n++;
	}
	int i=0;
	int fact=per(n);
	while(str[i]!='\0')
	{
		int j=i;
		int count=0;
		while(str[j]!='\0')
		{
			if(str[i]==str[j])
			{
				count++;
			}
			j++;
		}
		fact=fact/count;
		i++;
	}
	
	cout<<fact;
}
