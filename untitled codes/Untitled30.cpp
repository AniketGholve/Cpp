#include<bits/stdc++.h>
using namespace std;
class node
{
	int data,key;
	node *next;
	public:
		node(int d,int k)
		{
			data=d;
			key=k;
			next=NULL;
		}
		friend class linklist;
};
class linklist
{
	int data,key;
	node *head;
	public:
		linklist()
		{
			head=NULL;
		}
		void createll()
		{
			cout<<"Enter The Data : ";
			cin>>data;
			cout<<"Entre the key : ";
			cin>>key;
			node *nn=new  node(data,key);
			if(head==NULL)
			{
				head=nn;	
			}
			else
			{
				node *temp =head;
				while(temp->next!=NULL)
				{
		  			temp=temp->next;	
				}
				temp->next=nn;	
			}	
		}
		void showll()
		{
			if(head==NULL)
			{
				cout<<"Link list Not Created "<<endl;
			}
			else
			{
				node *temp=head;
				while(temp!=NULL)
				{
					cout<<temp->data;
					temp=temp->next;
				}
			}	
		}
		int countll()
		{
			int count=1;
			node *temp=head;
			while(temp!=NULL)
			{
				count++;
				temp=temp->next;
			}
			return count;
		}
		void midll()
		{
			node *temp=head;
			
				int cnt=countll();
				int mid=cnt/2;
				int i=1;
				while(i!=mid)
				{
					temp=temp->next;
					i++;
				}
				cout<<temp->data;
		}	
};

int main()
{
	linklist o;
	int ch,ans;
	do
	{
		cout<<"Enter the number for option "<<endl;
		cout<<"1.create linklist "<<endl;
		cout<<"2.show linklist "<<endl;
		cout<<"3.show mid value "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: o.createll();
				break;
			case 2: o.showll();
				break;
			case 3: o.midll();
				break;
		}
		cout<<"Want to continue press 1 : ";
		cin>>ans;
	}while(ans==1);
}
