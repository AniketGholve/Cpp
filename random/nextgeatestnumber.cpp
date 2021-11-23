#include<iostream>
#define n 10
using namespace std;
class stack1
{
	int stk[n],top=-1;
	public:
		void push()
		{
			int x;
			if(top==n-1)
			{
				cout<<"STACK IS FULL "<<endl;
			}
			else
			{
				cout<<"ENTRE THE NUMBER : ";
				cin>>x;
				top++;
				stk[top]=x;
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
				cout<<"POP DATA IS : "<<stk[top];
				top--;			
			}			
		}
		void nextmax()
		{
			int temp=0;
			
			if(top==-1)
			{
				cout<<"STACK IS EMPTY"<<endl;
			}
			else
			{
				while(temp<=top)
				{
					int temp1=temp;
					while(temp1<=top+1)
					{
						
						if(temp1==top+1)
						{
							cout<<stk[temp]<<" ---> -1"<<endl;
							break;
						}
						else if(stk[temp]<stk[temp1])
						{
							cout<<stk[temp]<<" ---> "<<stk[temp1]<<endl;
							break;
						}
						else
						{
							temp1++;
						}
					}
					temp++;
				}
			}
		}
};
int main()
{
	int ans,ch;
	stack1 o;
	do 
	{
		cout<<"SELECT AMONG THE FOLLOWING  "<<endl;
		cout<<"1.PUSH ELEMENT IN STACK"<<endl;
		cout<<"2.POP ELEMENT FROM STACK"<<endl;
		cout<<"3.FIND NEXT MAX ELEMENT "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.push();
			break;
			case 2: o.pop();
			break;
			case 3: o.nextmax();
			break;
			default:cout<<"WRONG OPTION SELECTED "<<endl;
			break;
		}
		cout<<"WANT TO CONTINUE PRESS 1 : ";
		cin>>ans;
		system("CLS");
	}while(ans==1);
		
}
