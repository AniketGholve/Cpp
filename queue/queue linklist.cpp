#include<iostream>
using namespace std;
class node
{
	int data;
	node *next;
	public:
		node(int x)
		{
			data=x;
			next=NULL;
		}
		friend class queue1;
};
class queue1
{
	int d;
	node *front,*rear;
	public:
		queue1()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue()
		{
			cout<<"Enter The Data To Insert : ";
			cin>>d;
			node *nn=new node(d);
			if(front==NULL && rear==NULL)
			{
				rear=nn;
				front=nn;
			}
			else
			{
				rear->next=nn;
				rear=nn;	
			}
		}
		void display()
		{
			node *temp=front;	
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}
			cout<<endl;
		}
		void dequeue()
		{
			node *temp=front;
			cout<<"deleted element is : "<<front->data<<endl;
			front=front->next;
			delete(temp);
		}
};
int main()
{
	queue1 o;
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.display();
	o.dequeue();
	o.display();
}
