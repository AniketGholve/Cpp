#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
void revnumber()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	cout<<"Reverse number is :";
	while(num>0)
	{
		cout<<num%10;
		num=num/10;
	}
}
void revstring()
{
	int l;
	cout<<"entre the lenthe of string";
	cin>>l;
	char str[l];
	cout<<"entre the string";
	cin.ignore();
	cin.getline(str,l+1);
	for(int i=l;i>=0;i--)
	{
		cout<<str[i];
	}
}
void fibonacci()
{
	int a=0;
	int b=1;
	cout<<"entre the length : ";
	int n;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n;i++)
	{
		int c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
void factorial()
{
	int n;
	cout<<"entre the number : ";
	cin>>n;
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
}

void hcf()
{
	int num=1;
	int n1=10;
	int n2=30;
	while(num%n1!=0 && num%n2!=0)
	{
		num++;
	}
	cout<<"hcf is :"<<num;
	int lcm=(n1*n2)/num;
	cout<<"lcm is :"<<lcm;
}
void palindrom_number()
{
	int num;
	cout<<"enter the number :";
	cin>>num;
	int num1=num,sum=0;
	while(num1>0)
	{
		sum=(sum*10)+(num1%10);
		num1=num1/10;
	}
	if(sum==num)
	{
		cout<<"number is palindrom"<<endl;
	}
	else
	{
		cout<<"number is not palindrom"<<endl<<sum;
	}
}
void palindrom_string()
{
	char str[100];
	cout<<"enter the number :";
	cin>>str;
	char str2[100];
	int l=sizeof(str)/sizeof(str[0]);
	int j=0;
	for(int i=l;i>=0;i--)
	{
		str2[i]=str[j];
		j++;
	}
	if(strcmp(str2,str))
	{
		cout<<"String is palindrom";
	}
	else
	{
		cout<<"string is not palindrom";
	}
}
int prime(int n)
{
	int flag=1;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}	
}
void check()
{
	int n;
	cout<<"entre the number : ";
	cin>>n;
	int n1=2,n2=n;
	while(n1<n2)
	{
		n2=n-n1;
		if(prime(n1))
		{
			if(prime(n2))
			{
				cout<<n1<<" + "<<n2<<" = "<<n; 
				break;
			}
			else
			{
				n1++;
			}
		}
		else
		{
			n1++;
		}
	}
}
int main()
{
	check();
}
