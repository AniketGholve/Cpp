#include<bits/stdc++.h>
#define n 10
using namespace std;
class number
{
	int top=-1,stk[n],x;
	public:
	void push()
	{
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
			cout<<"STACK IS EMPTY ";
		}
		else
		{
			cout<<"POP ELEMENT IS : "<<stk[top]<<endl;
			top--;
		}
	}

	void nextfreq()
	{
		int c[n];
		int k=0;
		for(int i=0;i<=top;i++)
		{
			int count=0;
			for(int j=0;j<=top;j++)
			{
				if(stk[i]==stk[j])
				{
					count++;
				}
			}
			c[k]=count;
			k++;
		}
		for(int k=0;k<=top;k++)
		{
			int count1=-1;
			for(int l=k;l<=top;l++)
			{
				if(c[k]>c[l])
				{
					count1++;
				}
			}
			cout<<count1<<" ";
		}
	}
};
int main()
{
	number o;
	o.push();
	o.push();
	o.push();
	o.push();
	o.push();
	o.push();
	o.push();
	o.nextfreq();
}
