#include<bits/stdc++.h>
using namespace std;
class node 
{
	public:
		int key,data;
		node *next;
		
		node(int k,int d)
		{
			key=k;
			data=d;
			next=NULL;
		}
};
class linklist
{
	public:
		node *head;
		linklist()
		{
			head=NULL;
		}
		void addnode()
		{
			int d,k;
			cout<<"Enter the data : ";		
			cin>>d;
			cout<<"Entre the key : ";
			cin>>k;
			node*nn=new node(k,d);
			if(head==NULL)
			{
				head=nn;
				cout<<"node inserted at head"<<endl;			
			}
			else
			{
				node *ptr=head;
				int count=1;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
					count++;
				}
				ptr->next=nn;
			cout<<"node inserted at position "<<count+1<<endl;
			}
			cout<<"\n";
		}
		void showdata()
		{
			node *ptr=head;
			cout<<"Data of linklist is :";
			while(ptr!=NULL)
			{
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
			cout<<endl;
		}
		void insertatbegin()
		{
			node *ptr=head;
			int k,d;
			node *nn;
			cout<<"Enter the data : ";
			cin>>d;
			cout<<"Enter the key : ";
			cin>>k; 
			nn=new node(k,d);
			if(head==NULL)
			{
				head=nn;
			}
			else
			{
				node *temp;
				temp=head;
				head=nn;
				nn->next=temp;
				cout<<endl<<"Head replaced "<<endl;
			}
		}
		void insertatend()
		{
			node *ptr=head;
			int k,d;
			node *nn;
			cout<<"Enter the data : ";
			cin>>d;
			cout<<"Enter the key : ";
			cin>>k; 
			nn=new node(k,d);
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;	
				}
				ptr->next=nn;
		}
		void insertmid()
		{
			int k,d;
			node *ptr=head,*nn;
				cout<<"Entre the data to insert : ";
				cin>>d;
				cout<<"Enter the key to insert : ";
				cin>>k;
				nn=new node(k,d);
				while(ptr->key!=NULL)
				{
					if(ptr->key==k)
					{
						break;
					}
					ptr=ptr->next;
				}
				node *temp;
				temp=ptr->next;
				ptr->next=nn;
				nn->next=temp;		
		}
		void deletebegin()
		{
			int d;
			node *ptr=head;
			if(head==NULL)
			{
				cout<<"Entre the linklist "<<endl;
			}
			else
			{
				ptr=head;
				head=ptr->next;
				delete(ptr);	
			}
			showdata();
			 
		}
		void deleteend()
		{
			node *ptr,*ptr1;
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			ptr1->next=NULL;
			delete(ptr);
			showdata();
		}
		void randomdelete()
		{
			node *ptr,*ptr1;
			int d;
			ptr=head;
			cout<<"Entre the Data you want to delete: ";
			cin>>d;
			while(ptr->data!=d)
			{
				ptr1=ptr;
				ptr=ptr->next;		
			}
			ptr1->next=ptr->next;
			delete(ptr);	
			showdata();	
		}
};

int main()
{
	linklist o;
	int ans;
	do
	{
		o.addnode(); 
		cout<<"press 1 to add more nodes : ";
		cin>>ans;
	}while(ans==1);
	o.showdata();
	o.randomdelete();
}
