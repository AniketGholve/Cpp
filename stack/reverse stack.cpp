#include<bits/stdc++.h>
#define n 10
using namespace std;
class name
{
	stack<int>s1,s2;
	int flag=0;
	public:	
	void push1()
	{
		int x;
		cout<<"Entre the data : ";
		cin>>x;
		s1.push(x);
	}
	void stk()
	{
			if(s1.size()!=0)
			{
				s2.push(s1.top());
				s1.pop();
				stk();
			}
	}	
	void display()
	{
		if(s2.size()==0)
		{
			cout<<"first reverse the stack Or stack is empty"<<endl;
		}
		else
		{
			while(s2.size()!=0)
			{
				cout<<s2.top();
				s2.pop();
			}
		}
	}
	
};
int main()
{
	name o;
	int ch,ans;
	do
	{
		cout<<"1.push element in stack"<<endl;
		cout<<"2.reverse stack"<<endl;
		cout<<"3.display reverse stack"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.push1();
			break;
			case 2:o.stk();
			break;
			case 3:o.display();
			break;	
		}	
		cout<<"want to continue press 1 : ";
		cin>>ans;
	}while(ans==1);	
}
