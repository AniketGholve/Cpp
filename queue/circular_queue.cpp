
#include<iostream>
#define n 5
using namespace std;
class c_queue
{
	int front=-1,rear=-1,q1[n];
	public:
		void enqueue()
		{
			int data;
			cout<<"entre the data : ";
			cin>>data;
			if(rear==-1&& front==-1)
			{
				rear++;
				front++;
				q1[rear]=data;
			}
			else if((rear+1)%n==front)
			{
				cout<<"queue is full"<<endl;
			}
			else
			{
				rear=(rear+1)%n;
				q1[rear]=data;
			}
		}
		void dequeue()
		{
			if(rear==-1 && front==-1)
			{
				cout<<"Queue is empty"<<endl;
			}
			else if(front==rear)
			{
				cout<<"deleted data is : "<<q1[front]<<endl;
				front=-1;
				rear=-1;
			}
			else
			{
				cout<<"deleted data is : "<<q1[front]<<endl;
				front=(front+1)%n;
			}
		}
		void display()
		{
			int i=front;
			while(i!=rear)
			{
				cout<<q1[i]<<" ";
				i=(i+1)%n;
			}
			cout<<q1[rear];
		}
};
int main()
{
	c_queue o;
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.enqueue();
	o.dequeue();
	o.enqueue();
	o.dequeue();
	o.display();
}
