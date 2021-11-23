#include<iostream>
using namespace std;
class node
{
	int data;
	node* next;
	
	public:
		
	node(int x)
	{
		data=x;
		next=NULL;
	}
	friend class stack;
};

class stack
{
	node* head;
	int d;
	public:
		stack()
		{
			head=NULL;
		}
		void push()
		{
			cout<<"entre data to push : ";
			cin>>d;	
			node * nn=new node(d);
			if(head==NULL)
			{
				head=nn;
			}
			else
			{
				nn->next=head;
				head=nn;
			}
		}
		void pop()
		{
			node* temp=head;
			head=head->next;
			cout<<"poped element is : "<<temp->data<<endl;
			delete(temp);
		}
		void display()
		{
			node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
};
int main()
{
	stack o;
	o.push();
	o.push();
	o.push();
	o.push();
	o.push();
	o.push();
	o.display();
	o.pop();
	o.display();
}
