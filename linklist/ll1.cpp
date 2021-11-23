#include<iostream>
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
	node * head;
	public:
	ll()
	{
		head=NULL;
	}
	void insert()
	{
		int data;
		node *nn;
		cout<<"Entre the Data ";
		cin>>data;
		nn=new node(data);
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
		cout<<endl;
	}
	void display()
	{
		
		node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;	
		}	
		cout<<endl;
	} 	
	void delete1()
	{
		cout<<"Entre the data : ";
		node *temp=head;
		node *ptr;
		int key,count=0;
		cin>>key;
		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				if(temp==head)
				{
					head= head->next;
					delete(temp);
					cout<<"Key found and deleted"<<endl;
					break;
				}
				else if(temp->next==NULL)
				{
					cout<<"Key found and deleted"<<endl;
					delete(temp);
					ptr->next=NULL;
					break;
				}
				else
				{
					ptr->next=temp->next;
					cout<<"Key found and deleted"<<endl;
					delete(temp);
					break;
				}
			}
			else
			{
				count=0;
				ptr=temp;
				temp=temp->next;
			}
		}
	}	
	void total_element()
	{
		int count1=0;
		node *temp=head;
		while(temp!=NULL)
		{
			count1++;
			temp=temp->next;
		}
		cout<<"Total Element in Link list : "<<count1;
	}
	void reverse()
	{
		node *temp=head;
		node *next_r;
		node* pre=NULL;
		while(temp!=NULL)
		{
			next_r=temp->next;
			temp->next=pre;
			pre=temp;
			temp=next_r;
		} 
		head=pre;
	}
	void reverse1()
	{
		node*temp=head;
		node*pre=NULL;
		node*next_r;
		while(temp!=NULL)
		{
			next_r=temp->next;
			temp->next=pre;
			pre=temp;
			temp=next_r;
		}
		head=pre;
	}
	void reverse2()
	{
		node*temp=head;
		node *pre=NULL;
		node*next_r;
		while(temp!=NULL)
		{
			next_r=temp->next;
			temp->next=pre;
			pre=temp;
			temp=next_r;
		}
		head=pre;
	}
};
int main()
{
	ll o;
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	/*o.display();
	o.delete1();
	o.display();
	o.total_element();*/
	o.reverse1();
	cout<<endl; 
	o.display();
}





































