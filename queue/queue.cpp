#include<iostream>
#define n 10
using namespace std;
class queue
{
	int q1[n],front=-1,rear=-1;
	public:
		void enguque()
		{
			if(rear==n-1)
			{
				cout<<"queue is full"<<endl;
			}
			else
			{
				int data;
				cout<<"enter the data to insert : ";
				cin>>data;
				if(rear==-1&& front==-1)
				{ 
					front++;
					rear++;
					q1[rear]=data;
				}
				else
				{
					rear++;
					q1[rear]=data;
				}
			}
		}
		void dequeue()
		{
			if(rear==front)
			{
				cout<<"deleted element is : "<<q1[front]<<endl;
				front=-1;
				rear=-1;
			}
			else if(rear==-1&& front==-1)
			{
				cout<<"queue is empty"<<endl;
			}
			else
			{
				cout<<"deleted element is : "<<q1[front]<<endl;
				front++;
			}
		}
		void display()
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<q1[i]<<" ";
			}
			cout<<endl;
		}
		int find_front()
		{
			return q1[front];
		}
};
int main()
{
	queue o;
	o.enguque();
	o.enguque();
	o.enguque();
	o.display();
	o.dequeue();
	o.dequeue();
	o.dequeue();
	o.enguque();	
	cout<<"Front of the queue is : "<<o.find_front()<<endl;
}
