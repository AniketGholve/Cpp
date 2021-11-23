#include<iostream>
#include<string.h>
using namespace std;
void palindrom()
{
	int n;
	cin>>n;
	char arr[n+1];
	cin>>arr;
	int count=0;
	int i=0,j=n-1;
	while(i<n&&j>=0)
	{
		if(arr[i]!=arr[j])
		{
			count=1;
			cout<<"not palindrom"<<endl;	
			break;	
		}
		i++;
		j--;
	}
	if(count==0)
	{
		cout<<"plaindrom"<<endl;
	}	
}
int main()
{
	palindrom();
}
