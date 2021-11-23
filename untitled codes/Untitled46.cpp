#include<bits/stdc++.h>
#define n 10
using namespace std;
class stk
{
	int stack[n],x,top=-1;
	public:
		void push()
		{
			if(top==n-1)
			{
				cout<<"STACK IS FULL"<<endl;
			}
			else
			{
				cout<<"ENTER THE DATA : ";
				cin>>x;
				top++;
				stack[top]=x;	
			}			
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"STACK IS EMPTY "<<endl;
			}
			else
			{
				cout<<"ELEMENT POP IS : "<<stack[top]<<endl;
				top--;
			}
		}
		void minimum()
		{
			int temp=top;
			int temp1;
			while(temp>=0)
			{
				if(stack[temp]<stack[temp-1])
				{
					temp1=stack[temp-1];
					temp--;	
				}
				else
				{
					temp--;
				}
			}
			cout<<"MINIMUM ELEMENT IN STACK IS :"<<temp1;
		}
		void display()
		{
			int temp=top;
			if(top==-1)
			{
				cout<<"STACK IS EMPTY"<<endl;
			}
			else 
			{
				while(temp>=0)
				{
					cout<<stack[temp]<<" ";
					temp--;
				}
			}
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
		cout<<"3.MINIMUM ELEMENT IN STACK"<<endl;
		cout<<"4.DISPLAY ELEMENT OF STACK"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.push();	
				break;
			case 2: o.pop();
				break;
			case 3: o.minimum();
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
