#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		int key;
		node *next;
			
		node(int k,int d)
		{
			key=k;
			data=d;
			next=NULL;	
		}
};

class singlylinklist
{
	public:
	node *head;
	singlylinklist()
	{
		head=NULL;	
	}
	void addnode()
	{
		int d,k;
		node *nn;
		cout<<"enter the data : ";
		cin>>d;
		cout<<"enter the key : ";
		cin>>k;
		nn=new node(k,d);
		if(head==NULL)
		{
			head=nn;
			cout<<"node appended at head"<<endl;
		}
		else
	 	{	
			node *ptr=head;
			while(ptr->next!=NULL)
		 	{
				ptr=ptr->next;
		 	}
			ptr->next=nn;
			cout<<"node appended "<<endl;		
	 	}
	}
};
int main()
{
		singlylinklist o1;
		o1.addnode();
		o1.addnode();
		o1.addnode();
}
