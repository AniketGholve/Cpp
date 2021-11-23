#include<bits/stdc++.h>
using namespace std;
class node
{
	int data;
	node * left,*right;
	public:
		node(int d)
		{
			data=d;
			left=NULL;
			right=NULL;
		}
		friend class stk;
};
class stk
{
	node *head;
	int data;
	public:
		stk()
		{
			head=NULL;
		}
		void push()
		{
			cout<<"ENTER THE DATA TO INSERT IN STACK :";
			cin>>data;
			node *nn=new node(data);
			if(head==NULL)
			{
				head=nn;
			}
			else
			{
				node *temp=head;
				head=nn;
				head->right=temp;
			}
		}
		void display()
		{
			node *temp=head;
			cout<<endl;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->right;
			}
			cout<<endl;
		}
		void pop()
		{
			if(head==NULL)
			{
				cout<<"Empty stack "<<endl;
			}
			else if(head->right==NULL)
			{
				head=NULL;
				cout<<"ALL data removed "<<endl;
			}
			else
			{
				node *temp=head;
				head=temp->right;
				cout<<"POP ELEMENT FROM  STACK IS :"<<temp->data<<endl;
				delete(temp);
			}	
		}
		void topdata()
		{
			cout<<"Top element of Stack is : "<<head->data<<endl;
		}
		
};
int main()
{
	int ans,ch;
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
			case 2: o.pop();
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
