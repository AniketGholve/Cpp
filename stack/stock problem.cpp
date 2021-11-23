#include<iostream>
#define n 10
using namespace std;
class stack1
{
	int stk[n],top=-1,x;
	public:
		void enqueue()
		{
			if(top==n-1)
			{
				cout<<"STACK IS FULL "<<endl;
			}
			else
			{
				cout<<"ENTER THE DATA : ";
				cin>>x;
				top++;
				stk[top]=x;
			}
		}
		void check()
		{
			int temp=top;
			
			while(temp!=-1)
			{
				int temp1=temp;
				int count=0;
				while(stk[temp]>=stk[temp1]&&temp1!=-1)
				{
					temp1--;
					count++;
				}
				temp--;
				cout<<count;
			}
		}
};
int main()
{
	stack1 o;
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.check();
}
