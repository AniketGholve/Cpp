#include<iostream>
#include<string.h>
using namespace std;
int CheckPassword(char str[])
{
	int k=0,u=0,m=0,n=0;
	if(str==NULL)
	{
		return 0;
	}
	else if(strlen(str)<4)
	{
		return 0;	
	}
	else if(strlen(str)>4)
	{
		for(int i=0;i<strlen(str);i++)
		{
			if(isdigit(str[i])==true)
			{
				k=1;
				break;
			}
			else
			{
				k=0;
			}
		}
		
		for(int i=0;i<strlen(str);i++)
		{
			if(isupper(str[i])==true)
			{
				u=1;
				break;
			}
			else
			{
				u=0;
			}
		}
		
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='/' || str[i]==' ')
			{
				m=0;
				break;
			}
			else
			{
				m=1;
			}
		}
		if(isdigit(str[0])==false)
		{
			n=1;
		}
		else
		{
			n=0;
		}
		if(k==1 && u==1 && m==1 && n==1)
		{
			return 1;
			
		}
		else
		{
			return 0;
		}
	}
	
	
};

int main()
{
	char str[100];
	cout<<"Entre the password : ";
	cin.getline(str,100);
	int k=CheckPassword(str);
	if(k==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
}

