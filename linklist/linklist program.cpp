#include<iostream>
using namespace std;
class node
{
	node* next;
	int data;
	int count;
	public:
	node(int x)
	{
		data=x;
		next=NULL;
		count=0;
	}
	friend class ll;
};
class ll
{
	node *head,*head1=NULL;
	public:
		ll()
		{
			head=NULL;
		}
	void insert()
	{
		int d;
		cout<<"entre the data to insert : ";
		cin>>d; 
		node *nn=new node(d);
		if(head==NULL)	
		{
			head=nn;
		}
		else
		{
			node *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=nn;
		}
	}	
	void display()
	{
		node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<endl;
	}
	void display1()
	{
		node *temp=head1;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<endl;
	}
	void reverse()
	{
		node*temp=head;
		while(temp!=NULL)
		{
			node *nn=new node(temp->data);
			if(head1==NULL)
			{
				head1=nn;
			}
			else
			{
				nn->next=head1;
				head1=nn;
				
			}
			temp=temp->next;
		}
	}
	void sort()
	{
		node* temp2=head;
		while(temp2!=NULL)
		{
			node* temp=temp2;
			while(temp!=NULL)
			{
				if(temp2->data > temp->data)
				{
					int d=temp2->data;
					temp2->data=temp->data;
					temp->data=d;
				}
				temp=temp->next;
			}
			temp2=temp2->next;
		}		
	}
	
};
int main()
{
	ll o;
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.display();
	o.reverse();
	o.display1();
	o.sort();
	o.display();
}
