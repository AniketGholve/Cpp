#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		node*pre,*next;
		int data;
		node(int d)
		{
			data=d;
			pre=NULL;
			next=NULL;
		}
};
class dll
{
	public:
		node *head,*nn;
		int data;
		dll()
		{
			head=NULL;
		}
		void ll()
	 	{
	 		int d;
	 		cout<<"Entre the data: ";
	 		cin>>d;
	 		node *nn=new node(d);
	 		nn->data=d;
	 		if(head==NULL)
	 		{
				head=nn;
				nn->pre=NULL;	
		 	}
		 	else
		 	{
				node *ptr1;
				ptr1=head;
				while(ptr1->next!=NULL)
		 		{
					ptr1=ptr1->next;
		  		}
		  		ptr1->next=nn;
		  		nn->pre=ptr1;
		 	}	
	 	}
	 	void inserthead()
	 	{
	 		int d;
	 		cout<<"Entre the data : ";
		 	cin>>d;
		 	node * nn=new node(d);
		    if(head==NULL)
			{
				head=nn;	
			}
			else
			{
				node *ptr=head;
				ptr->pre=nn;
				nn->next=ptr;
				head=nn;	
			}	 	
		}
		void insertmid()
		{
			node *ptr=head;
			if(ptr==NULL)
			{
				
			}
		}
		void show()
		{
			node *ptr=head;
			if(ptr==NULL)
			{
				cout<<"Enter the linklist First";
			}
			else{
				while(ptr!=NULL)
				{
					cout<<ptr->data <<" ";
					ptr=ptr->next;
				}
			}
		}
		int csearch(int k)
		{
			int key=k;
			int z;
			node *ptr;
			ptr=head;
			if(ptr==NULL)
			{
				cout<<"Enter the linklist First";
				z=0;
			}
			else
			{
				while(ptr!=NULL)
				{
					if(ptr->data==key)
					{
						z=1;
						break;
					}
					else
					{
						ptr=ptr->next;
						z=0;
					}
				}	
			}
			return z;	
		}
		void delete1()
		{
			int d;
			cout<<"Entre the value too delete : ";
			cin>>d;
			node *ptr=head,*ptr1;
			int z=csearch(d);
				if(ptr==NULL)
				{
					cout<<"Enter the linklist First"<<endl;
					ll();
				}
				else if(z==1)
				{
					while(ptr->data!=d)
					{
						ptr1=ptr;
						ptr=ptr->next;
					}
					if(ptr==head &&ptr->next==NULL&&ptr->pre==NULL)
					{
						cout<<"You cannot Delete last element of linklist "<<endl;
					}
					else if(ptr==head)
					{
						head=ptr->next;
						ptr->next=NULL;
						head->pre=NULL;
						delete(ptr);
					}
					else if(ptr->next==NULL)
					{
						ptr->pre=NULL;
						ptr1->next=NULL;
						delete(ptr);
					}
					else
					{
						ptr->next->pre=ptr->pre;
						ptr1->next=ptr->next;
						delete(ptr);	
					}	
				}
				else
				{
					cout<<"NO value found Enter correct value "<<endl;
				}
				show();
		}
		void reverse()
		{
			node * ptr=head;
			if(ptr==NULL)
			{
				cout<<"Enter linklist first "<<endl;
			}
			else
			{
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				cout<<endl;
				while(ptr!=NULL)
				{
					cout<<ptr->data <<" ";
					ptr=ptr->pre;
				}
			}
		}
		void count()
		{
			int count=0;
			node *ptr=head;
			while(ptr!=NULL)
			{
				count++;
				ptr=ptr->next;
			}
			cout<<endl<<count;
		}
};
int main()
{
	int ans;
	dll o;
	
	
	do{
		o.ll();
		cout<<"want to cont press 1 : ";
		cin>>ans;
	}while(ans==1);
	o.show();
	//o.inserthead();
/*	do
	{
		o.delete1();
		cout<<"want to delete more press 1 :";
		cin>>ans;
	}while(ans==1);*/
	//o.reverse();
	//o.count();
	o.show();
	
}
