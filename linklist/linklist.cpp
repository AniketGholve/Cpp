#include<iostream>
using namespace std;
class node
{
	node* next;
	int data;
	public:
	node(int x)
	{
		data=x;
		next=NULL;	
	}	
	friend class ll;
};

class ll
{
	int data;
	node* head;
	public:
		ll()
		{
			head=NULL;
		}
	void insert()
	{
		cout<<"entre the data to insert";
		cin>>data;
		node * nn=new node(data);
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
	}
};
int main()
{
	ll o;
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.display();
}
