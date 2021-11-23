#include<iostream>
using namespace std;
void stringrep()
{
	int l;
	cout<<"enter the length of string";
	cin>>l;
	char str[l];
	cout<<"entre the string ";
	cin>>str;
	int n=sizeof(str)/sizeof(str[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(str[i]>str[j])
			{
				char temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<str[i];
	}
}
int main()
{
	stringrep();
}
