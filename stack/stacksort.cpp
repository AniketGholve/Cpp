#include<bits/stdc++.h>
#define n 10
using namespace std;
class name
{
	int stk[n],stk1[n],top=-1;
	public:
	void push()
	{
		if(top==n-1)
		{
			cout<<"Stack is full"<<endl;
		}
		else
		{
			cout<<"Entre The Value : ";
			top++;
			cin>>stk[top];
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack Is Empty"<<endl;
		}
		else
		{
			top--;	
		}
	}
	void sort()
	{
		for(int i=0;i<=top;i++)
		{
			for(int j=i;j<=top;j++)
			{
				if(stk[i]>stk[j])
				{
					int temp=stk[i];
					stk[i]=stk[j];
					stk[j]=temp;
				}
			}
		}
	}
	void display()
	{
		int i=top;
		while(i!=-1)
		{
			cout<<stk[i];
			i--;
		}
	}
};

int main()
{
	name o;
	int ch,ans;
	do
	{
		system("CLS");
		cout<<"1.push element in stack"<<endl;
		cout<<"2.sort stack"<<endl;
		cout<<"3.display reverse stack"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.push();
			break;
			case 2:o.sort();
			break;
			case 3:o.display();
			break;	
		}	
		cout<<"want to continue press 1 : ";
		cin>>ans;
	}while(ans==1);	
}
