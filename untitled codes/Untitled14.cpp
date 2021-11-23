#include<iostream>
#include<string.h>
using namespace std;
int rec_char(char str[])
{
	int count=0,var_cnt=0;
	char val;
	for(int i=0;i<strlen(str);i++)
	{
		var_cnt=0;
		for(int j=0;j<strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				var_cnt++;	
			}
		}
			if(var_cnt>=count)
			{	
				val=str[i];
				count=var_cnt;
				
			}
	}
	cout<<val;
	return 0;
}
int main()
{
	char str[100];
	cout<<"entre the string ";
	cin.getline(str,100);
	rec_char(str);
}
