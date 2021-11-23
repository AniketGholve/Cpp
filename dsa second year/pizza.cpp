#include<iostream>
#include<cstring>
using namespace std;
class pizza 
{
	int front,rear,q[5];
	public:
	pizza()
	{
		front=-1;
		rear=-1;
	}
	int is_full()
	{
		if((front==0)&&(rear==4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int is_empty()
	{
		if((front==-1&&rear==-1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void add()
	{
		int a;
		if(is_full()==0)
		{
			do
			{
			cout<<"entre the the pizza id:";
			if(front==-1&&rear==-1)
			{
				front=0;
				rear=0;
				cin>>q[rear];
			}
			else
			{
				rear=(rear+1)%5;
				cin>>q[rear];
			}
			cout<<"do you want to add more(press 1): ";
			cin>>a;
			}while(a==1);
		}
		else
		{
			cout<<"\n order is full";
		}
	}
	void serve()
	{
		if(is_empty()==0)
		{
			if(front==rear)
			{
				cout<<"order dilivered is : "<<q[front];
				front=-1;
				rear=-1;
			}
			else
			{
				cout<<"order deliverd is "<<q[front];
				front=(front+1)%5;
			}
		}
		else
		{
			cout<<"order is empty\n";
		}
	}
	void display()
	{
		if(is_empty()==0)
		{
			for(int i=front;i!=rear;i++)
			{
				cout<<q[i]<<"<-";
			}
			cout<<q[rear];
		}
		else
		{
			cout<<"order is empty\n";
		}
	}
};
int main()
{
			pizza p;
			int ch,ans;
            cout<<"\n\nPIZZA PARLOUR !\n\n";
            do
            {
			cout<<"\n 1. Add a Pizza in Queue \n 2. Display the Orders \n 3. Serve a pizza \n 4. Exit \n Enter your choice : ";
            cin>>ch;
            switch(ch)
            {             
            case 1:
            p.add();
            break;
            case 2:
            p.display();
            break;
            case 3:
            p.serve();
            break;
            case 4:
            exit(0);
            default:
            cout<<" Invalid choice ";                
            }
            cout<<"do you wnat to cont(press 1)";
            cin>>ans;
       		}while(ans==1);
}
