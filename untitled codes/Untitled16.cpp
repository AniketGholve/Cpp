#include<iostream>
using namespace std;
int main()
{
	int sum=0,num,n;
	cout<<"entre the number :";
	cin>>num;
	int temp;
	temp=num;
	while(num>0)
	{
		n=num%10;
		sum=(sum*10)+n;
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrom";
	}
}
