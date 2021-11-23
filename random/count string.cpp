#include<iostream>
#include<string>
using namespace std;
void string1()
{
	string s;
	cout<<"enteh the string";
	cin>>s;
	int n=s.length();
	int arr[10]={0};
	int count=0;
	int i=0;
	while(i<n)
	{
		
		if(arr[s[i]%10]!=1)
		{
			arr[i]=1;
			count++;
		}
		i++;
	}
	cout<<count;
}
int main()
{
	string1();
}
