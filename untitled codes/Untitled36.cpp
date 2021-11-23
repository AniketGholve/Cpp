#include<bits/stdc++.h>
#define n 5
using namespace std;
class stk
{
	int stack[n],top=-1;
	public:
		void push()
		{
			int x;
			if(top==n-1)
			{
				cout<<"Stack is full "<<endl;
			}
			else
			{
				cout<<"Entre the data to insert : ";
				cin>>x;
				top++;
				stack[top]=x;
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"Empty Stack "<<endl;
			}
			else
			{
				cout<<"Item deleted is : "<<stack[top]<<endl;
				top--;
			}
		}
		void display()
		{
			int temp=top;
			if(temp==-1)
			{
				cout<<"Cannot display stack is empty "<<endl;
			}
			else
			{
				while(temp>=0)
				{
					cout<<stack[temp]<<" ";
					temp--;
				}
				cout<<endl;
			}
		}
		void topele()
		{
			if(top==-1)
			{
				cout<<"Empty stack "<<endl;
			}
			else 
			{
				cout<<"Top most element is : "<<stack[top]<<endl;
			}
		}
};
int main()
{
	stk o;
	int ch,ans;
	do{
		system("CLS");
		cout<<"Select from the bellow operation you want to  do on stack "<<endl;
		cout<<"1.PUSH"<<endl;
		cout<<"2.POP"<<endl;
		cout<<"3.DISPLAY"<<endl;
		cout<<"4.TOP ELEMENT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.push();
			break;
			case 2:o.pop();
			break;
			case 3:o.display();
			break;
			case 4:o.topele();
			break;
			default:cout<<"Entered Wrong value"<<endl;
			break;	
		}
		cout<<"Want to continue press 1 :";
		cin>>ans;
	}while(ans==1);
}
