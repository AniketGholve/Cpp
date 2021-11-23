#include<iostream>
#include<cmath>
#include<stack>
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
	void deleten()
	{
		int n,m;
		cout<<"After how many nodes you have to delete: ";
		cin>>n;
		cout<<"how many nodes :";
		cin>>m;
		node*temp=head;
		node *temp2;
		int i=1,j=0;
		while(i<=n)
		{
			temp2=temp;
			temp=temp->next;
			i++;
		}
		while(j<=m)
		{
			temp2->next=temp;
			temp=temp->next;
			j++;
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
	void rev()
	{
		node *temp=head;
		stack <int> s;
		while(temp!=NULL)
		{
			s.push(temp->data);
			temp=temp->next;
		}
		temp=head;
		while(s.size()!=-1)
		{
			if(s.top()==temp->data)
			{
				temp=temp->next;
				s.pop();
				count=1;
			}
			else
			{
				count=0;
				break;
			}
		}
		if(count==1)
		{
			cout<<"palindrom"<<endl;
		}
		else
		{
			cout<<"not palindrom"<<endl;
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
	o.rev();
}
