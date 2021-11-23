#include<bits/stdc++.h>
using namespace std;
class node
{
	int data;
	node* next;
	public:
		node(int d)
		{
			data=d;
			next=NULL;
		}
		friend class queuecll;
};
class queuecll
{
	node *front,*rear;
	int x;
	public:
		queuecll()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue()
		{
			cout<<"ENTER THE DATA : ";
			cin>>x;
			node *nn=new node(x);
			if(front==NULL &&rear==NULL)
			{
				front=nn;
				rear=nn;
				rear->next=nn;	
			}
			else
			{
				rear->next=nn;
				rear=nn;
				nn->next=front;	
			}
		}
		void display()
		{
			node* temp=front;
			if(temp==NULL)
			{
				cout<<"QUEUE IS EMPTY"<<endl;
			}
			else
			{
				while(temp!=rear)
				{
					cout<<temp->data<<" ";	
					temp=temp->next;
				}
				cout<<rear->data<<endl;	
			}
		}
		void dequeue()
		{
			node *temp=front;
			if(front==NULL && rear==NULL)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
			}
			else if(front==rear)
			{
				cout<<"POP DATA IS : "<<front->data<<endl;
				front=NULL;
				rear=NULL;
			}
			else
			{
				cout<<"POP DATA IS : "<<temp->data<<endl;
				front=temp->next;
				rear->next=front;
				delete(temp);
			}
		}	
		void top()
		{
			if(front==NULL)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
			}
			else
			{
				cout<<"TOP OF QUEUE IS : "<<front->data<<endl;
			}
		}
};
int main()
{
	queuecll o;
		int ch,ans;
	do 
	{
		cout<<"SELECT AMONG THE FOLLOWING  "<<endl;
		cout<<"1.PUSH ELEMENT IN QUEUE"<<endl;
		cout<<"2.POP ELEMENT FROM QUEUE"<<endl;
		cout<<"3.DISPLAY ELEMENT OF QUEUE"<<endl;
		cout<<"4.TOP OF QUEUE "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:o.enqueue();	
				break;
			case 2: o.dequeue();
				break;
			case 3: o.display();
				break;
			case 4: o.top();
				break;	
			default:cout<<"WRONG OPTION SELECTED "<<endl;
				break;
		}
		cout<<endl;
		cout<<"WANT TO CONTINUE PRESS 1 : ";
		cin>>ans;
		system("CLS");
	}while(ans==1);
}
