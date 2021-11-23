#include<bits/stdc++.h>
using namespace std;
class node
{
	int data;
	node *next;
	public:
		node(int d)
		{
			data =d;
			next=NULL;
		}
	friend class queue1;	
};
class queue1
{
	node *front,*rear;
	public:
		queue1()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue()
		{
			int x;
			cout<<"ENTER THE DATA : ";
			cin>>x;
			node * nn =new node(x);
			if(front==NULL && rear==NULL)
			{
				front=nn;
				rear=nn;		
			}
			else
			{
				front->next=nn;
				front=nn;
			}
		}
		void dequeue()
		{
			if(rear==NULL)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
			}
			else if(rear->next==NULL)
			{
				front=NULL;
				rear=NULL;
				cout<<"ALL ELEMENTS ARE POPED "<<endl;
			}
			else
			{
				node *temp=rear;
				cout<<"POPED ELEMENT IS : "<<rear->data<<endl;
				rear=rear->next;
				delete(temp);
			}
		}
		void display()
		{
			node *temp=rear;
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
	queue1 o;
	int ch,ans;
	do 
	{
		cout<<"SELECT AMONG THE FOLLOWING  "<<endl;
		cout<<"1.PUSH ELEMENT IN QUEUE"<<endl;
		cout<<"2.POP ELEMENT FROM QUEUE"<<endl;
		cout<<"3.DISPLAY ELEMENT OF QUEUE"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.enqueue();	
				break;
			case 2: o.dequeue();
				break;
			case 3: o.display();
				break;
			default:cout<<"WRONG OPTION SELECTED "<<endl;
				break;
		}
		cout<<"WANT TO CONTINUE PRESS 1 : ";
		cin>>ans;
		system("CLS");
	}while(ans==1);
}
