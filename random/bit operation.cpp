#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
 	char s[100];
 	cout<<"Entre the Name : ";
 	cin>>s;
 	char ans[100];
 	for(i=0;i<strlen(s);i++)
 	{
 	jump:	
	 	int ret=0;
	 	for(int r=0;r<strlen(ans);r++)
	 	{
 			if(ans[r]==s[i]) 
     	    {
     	    	i++;
			 	goto jump;
	 		}	   		
 		}
	 	ans[i]=s[i];
	 	cout<<s[i]<<":$";
	 	for(int j=i+1;j<strlen(s);j++)
	 	{
		 	if(ans[i]==s[j])
		 	{
		 		cout<<"$";	
		 	}	
 	    }
 	     
 		
		cout<<endl;
 	}
}
