#include<bits/stdc++.h>
#define n 10
using namespace std;
class queue1
{
	int rear=-1,front=-1,que[n],x;	
	public:
		void enque()
		{
			
			if(front==n-1)
			{
				cout<<"QUEUE IS FULL "<<endl;				
			}
			else
			{
				cout<<"ENTER THE VALUE TO INSERT ";
				cin>>x;
				if(rear==-1&&front==-1)
				{
					rear++;
					front++;
					que[front]=x;
				}
				else
				{
					front++;
					que[front]=x;
				}
			}
		}
		void deque()
		{
			if(rear>front)
			{
				cout<<"QUEUE IS EMPTY "<<endl;
			}
			else
			{
				cout<<"ELEMENT DELETED IS : "<<que[rear]<<endl;
				rear++;
			}
		}
		void display()	
		{
			int temp=rear;
			while(temp<=front)
			{
				cout<<que[temp]<<" ";
				temp++;
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
			case 1:o.enque();	
				break;
			case 2: o.deque();
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
