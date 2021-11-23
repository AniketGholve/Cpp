#include<iostream>
#include<string.h>

using namespace std;

void replaceCharacter(char str[],char ch1,char ch2,int len)
{
	char temp;
	for(int i=0;i<len;i++)
	{
		if(str[i]==ch1)
		{
			temp=str[i];
			str[i]=ch2;
		}
		
		else if(str[i]==ch2)
		{
			str[i]=ch1;
		}	
	}

	cout<<str;
}
int main()
{
	int len;
	char ch1,ch2,str[100];
	cin>>str;
	cin>>ch1;
	cin>>ch2;
	len=strlen(str);
	replaceCharacter(str,ch1,ch2,len);
}
