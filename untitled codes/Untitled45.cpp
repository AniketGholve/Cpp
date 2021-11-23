#include<bits/stdc++.h>
#define n 10
using namespace std;
class stk
{
	int stack1[n],stack2[n],x,top1=-1,top2=-1;
	public:
		int pop()
		{
			if(top1==-1)
			{
				cout<<"STACK IS EMPTY";
			}
			else
			{
				int c=stack1[top1];
				top1--;
				return c;
			}
		}
		int pop2()
		{
			if(top2==-1)
			{
				cout<<"STACK IS EMPTY";
			}
			else
			{
				int c=stack2[top2];
				top2--;
				return c;
			}
		}
		void push1()
		{
			while(top1>=0)
			{
				top2++;
				stack2[top2]=pop();	
			}
		}
		void push()
		{
			int ans;
			do
			{
				if(top1==n-1)
				{
					cout<<"QUEUE IS FULL ";	
				}
				else
				{		
					cout<<"ENTER THE DATA : ";
					cin>>x;
					top1++;
					stack1[top1]=x;	
				}	
				cout<<"WANT TO ENTER MORE IN QUEUE press 1 : ";
				cin>>ans;
			}while(ans==1);
			push1();
		}
		void display()
		{
			int temp=top2;
			while(temp>=0)
			{
				cout<<stack2[temp]<<" ";
				temp--;	
			}
			cout<<endl;	
		}
		void topdata()
		{
			cout<<stack2[top2]<<endl;
		}	
};
int main()
{
	int ch,ans;
	stk o;
	do 
	{
		cout<<"SELECT AMONG THE FOLLOWING  "<<endl;
		cout<<"1.PUSH ELEMENT IN STACK"<<endl;
		cout<<"2.POP ELEMENT FROM STACK"<<endl;
		cout<<"3.FIND TOP ELEMENT "<<endl;
		cout<<"4.DISPLAY ELEMENT OF STACK"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.push();	
			break;
			case 2: cout<<"ELEMWNT POP IS : "<<o.pop2();
			break;
			case 3: o.topdata();
			break;
			case 4: o.display();
			break;
			default:cout<<"WRONG OPTION SELECTED "<<endl;
			break;
		}
		cout<<"WANT TO CONTINUE PRESS 1 : ";
		cin>>ans;
		system("CLS");
	}while(ans==1);
}
