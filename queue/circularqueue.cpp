#include<bits/stdc++.h>
#define n 5
using namespace std;
class queue1
{
	int front=-1,rear=-1,que[n],x;
	public:
		void enqueue()
		{
			if((rear+1)%n==front)
			{
				cout<<"STACK IS FULL"<<endl;
			} 
			else if(rear==-1 && front==-1)
			{
				cout<<"ENTRE THE DATA : ";
				cin>>x;
				rear++;
				front++;
				que[rear]=x;
			}
			else
			{
				cout<<"ENTRE THE DATA : ";
				cin>>x;
				rear=(rear+1)%n;
				que[rear]=x;
			}
		}
		void dequeue()
		{
			if(front==-1&&rear==-1)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
			}
			else if(front!=-1)
			{
				int temp=front;
				front++;
			}
		}
		void display()
		{ int temp =front;
			while(temp!=rear)
			{
				cout<<que[temp]<<" ";
				temp=(temp+1)%n;
			}
			cout<<que[temp];
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
