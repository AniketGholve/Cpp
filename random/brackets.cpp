#include<bits/stdc++.h>
#define n 100
using  namespace std;
class stack1
{
	char stk[n],x[n],top=-1,r;
	public:
		void enqueue()
		{
			cout<<"ENTRE THE EQUATION : ";
			cin>>x;
			int i=0;
			while(i<strlen(x))
			{
				if(top==n-1)
				{
					cout<<"STACK IS FULL"<<endl;
				}
				else if(x[i]=='{' || x[i]=='(' || x[i]=='[')
				{
					top++;
					stk[top]=x[i];		
				}
				else
				{
					if(strlen(x)%2==0)
					{
						if(x[i]=='}')
						{
							if(stk[top]=='{')
							{
								r=1;
								top--;
							}
							else
							{
								r=0;
								break;
							}
						}
						if(x[i]==')')
						{
							if(stk[top]=='(')
							{
								r=1;
								top--;
							}
							else
							{
								r=0;
								break;
							}
						}
						if(x[i]==']')
						{
							if(stk[top]=='[')
							{
								r=1;
								top--;
							}
							else
							{
								r=0;
								break;
							}
						}	
					}
					else
					{
						r=0;
					}
				}
				i++;
			}
			if(r==0)
			{
				cout<<"NOT MATCHING "<<endl;
			}
			else
			{
				cout<<"CORRECT "<<endl;
			}
		}	
};
int main()
{
	stack1 o;
	o.enqueue();	
}
