#include<iostream>
using namespace std;
class node
{
	int data;
	node* next;
	public:
		node(int x)
		{
			data =x;
			next=NULL;	
		}
	friend class queue;			
};
class queue
{
	node * front;
	node * rear;
	public:
		queue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue()
		{
			int data;
			cout<<"entre the data : ";
			cin>>data;
			node *nn=new node(data);
			if(rear==NULL)
			{
				rear=nn;
				front=nn;
				rear->next=front;
			}
			else
			{
				rear->next=nn;
				rear=nn;
				rear->next=front;
			}
		}
		void display()
		{
			node *temp=front;
			if(temp==NULL)
			{
				cout<<"Queue is empty "<<endl;
			}
			else
			{
				while(temp!=rear)
				{
					cout<<temp->data<<" ";
					temp=temp->next;
				}
				cout<<temp->data;
				cout<<endl;
			}
		}
		void dequeue()
		{
			node *temp=front;
			if(front==NULL)
			{
				cout<<"queue is empty ";
			}
			else if(front==rear)
			{
				front=NULL;
				rear=NULL;
				cout<<"deleted data is : "<<temp->data<<endl;
				delete temp;
			}
			else
			{
				front=front->next;
				rear->next=front;
				cout<<"deleted data is : "<<temp->data<<endl;
				delete(temp);
			}
		}
};
int main()
{
	queue o;
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.dequeue();
	o.display();
	o.dequeue();
	o.display();
}
