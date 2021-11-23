#include<iostream>
#include<cstring>
#define MAX 5
using namespace std;
class queue
{
	class que
	{
		public:
			int id;
			char type[50];
	}q[MAX];
	public:
		int front,rear;
		queue()
		{
			front=-1;
			rear=-1;
		}
		int isempty()
		{
			if(rear==-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int isfull()
		{
			if(rear==MAX-1)
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
			
			if(rear==MAX-1)
			{
				cout<<"no more jobs\n";
			}
			if(isempty()==1)
			{
				int a;
				char k[50];
				cout<<"entre the job id:";
				cin>>a;
				cout<<"entre the job type:";
				cin>>k;
				rear=rear+1;
				front++;
				q[rear].id=a;
				strcpy(q[rear].type,k);
			}
			else
			{
				int a;
				char k[50];
				cout<<"entre the job id:";
				cin>>a;
				cout<<"entre the job type:";
				cin>>k;
				rear=rear+1;
				q[rear].id=a;
				strcpy(q[rear].type,k);
			}
		}
		que del()
		{
			que a;
			if(isempty()==1)
			{
				a.id=-1;
				cout<<"no more jobs to delete\n";
				return a;	
			}
			else
			{
				return q[front++];
			}
		 } 
		void delete1()
		{
			que a;
			a=del();
			if(rear<front)
			{
				rear=front=-1;
			}
			if(a.id<0)
			{
				return;
			}
			else
			{
				cout<<"deleted job id and type : "<<a.id<<"   "<<a.type;	
			}
					
		}	
};
int main()
{
	queue s;
    int n;
    while(1)
    {
        cout<<"\n ENTER \n 1. for adding job \n 2. for deleting job \n 3. EXIT\n";
        cin>>n;
        switch(n)
        {
            case 1:
                s.add();
                break;
            case 2:
                s.delete1();
                break;
            case 3:
                 exit (0);
        }
    }
    return 0;
}
