#include<iostream>
#include<stdlib.h>
#include<cstring>
#define MAX 20
using namespace std;
class stack
{
	int top;
	char str[MAX];
	public:
		stack()
		{
			top=-1;
		}
	int isempty()
	{
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int isfull()
	{
		if(top==MAX-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void push(char a)
	{
		if(isfull()==1)
		{
			cout<<"stack is full\n";
		}
		else
		{
			str[++top]=a;
		}
	}
	char pop()
	{
		if(isempty()==1)
		{
			cout<<"stack is empty\n";
		}
		else
		{
			return str[top--];
		}
	}
};
class pal
{	stack s;
	char a[100],b[100];
	int length_a,length_b;
	public:
		void getstring()
		{
			cout<<"entre the string : ";
			cin.getline(a,100);
			length_a=strlen(a);
		}
		void remove_punc()
		{
			int k=0;
			for(int i=0;i<length_a;i++)
			{
				if(a[i]>=65&&a[i]<91||a[i]>=97&&a[i]<123)
				{
					b[i]=a[i];
					k++;
				}
			}
			length_b=k;
			for(int j=0;j<k;j++)
			{
				cout<<b[j];
			}
		}
		void uppertolower()
		{
			for(int i=0;i<length_a;i++)
			{
				if(a[i]>=65&&a[i]<91)
				{
					b[i]=a[i]+32;
				}
				cout<<b[i];
			}
			
		}
		void call_pal(int flag)
		{
			if(flag==0)
			{
				add(a,length_a);
				check_pal(a,length_a);
			}
			else
			{
				add(b,length_b);
				check_pal(b,length_b);
			}
		}
		void add(char k[100],int length)
		{
			for(int i=0;i<length_a;i++)
			{
				s.push(k[i]);
			}
		}
		void check_pal(char k[100],int length)
		{
			int flag=0;
			for(int i=0;i<length;i++)
			{
				if(k[i]!=s.pop())
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"not a panlindrom\n";
			}
			else
			{
				cout<<"palindrom\n";
			}
		}
		void reverse()
		{
			int j=0;
			add(a,length_a);
			while(s.isempty()!=1)
			{
				a[j]=s.pop();
				j++;
			}
			length_a=j;
			cout<<a;
		}
};
int main()
{
	pal o;
	o.getstring();
	int q,ans;
	do
    {
	cout<<"Enter\n 1. for checking palindrome\n 2. for removing punctuations \n 3. for converting upper case to lower case\n 4. for checking whether string is palindrome or not after removing punctuations \n 5. for rverse array \n ";
    cin>>q;
    switch(q)
    {
    case 1:o.call_pal(0);
	break;
	case 2:o.remove_punc();
	break;
	case 3:o.uppertolower();
	break;
	case 4:o.call_pal(1);
	break;
	case 5:o.reverse();
	break;
	}
	cout<<"\ndo you want to cont(press 1)";
	cin>>ans;
	}while(ans==1);
}
