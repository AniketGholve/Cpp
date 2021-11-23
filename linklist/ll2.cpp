#include<iostream>
#include<cmath>
using namespace std;
class node
{
	node *next;
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
	int count=0;
	int data;
	node *head;
	public:
		ll()
		{
			head=NULL;
		}
	void insert()
	{
		cout<<"entre the data:";
		cin>>data;
		node *nn=new node(data);
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
		count++;
	}
	void mid1()
	{
		int i=1;
		node* temp=head;
		while(i < round(count/2))
		{
			temp=temp->next;
			i++;
		}
		cout<<temp->data;
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
	void delete1()
	{
		int k;
		cout<<"entre the value to delete : ";
		cin>>k;
		node *temp=head;
		if(k==head->data )
		{
			head=head->next;
			cout<<"head deleted";
		}
		else
		{
			node *temp2;
			while(temp->data!=k)
			{
				temp2=temp;
				temp=temp->next;
			}
			temp2->next=temp->next;
			delete(temp);
		}
		count--;
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
	o.insert();
	o.insert();
	o.display();
	o.delete1();
	o.display();
	o.mid1();
	o.delete_zero();
}
