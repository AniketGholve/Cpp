#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void str()
{
	char str1[100],str2[100];
	int k=0,r=0,length;
	cout<<"Entre the string : ";
	cin.getline(str1,100);
	
	length=strlen(str1);

	for(int i=0;i<length;i++)
	{	
		if(str1[i] != str1[length-i-1])
		{
			r=1;
			break;
		}
		else
		{
			r=0;
		}
	}	
	if(r==1)
	{
		cout<<str1<<" String is not palindrome"<<endl;
	}
	else
	{
		cout<<str1<<" String is palindrome"<<endl;
	}
}
int main()
{
	str();
	return 0;
}
