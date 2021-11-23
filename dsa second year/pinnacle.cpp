#include<iostream>
#include<string.h>
using namespace std;
class node
{
	int prn;
	char name[100];
	node *next;
	public:
		node(int x,char n[])
		{
			prn=x;
			strcpy(name,n);
			next=NULL;	
		}
	friend class pinnacle_class;	
};
class pinnacle_class
{
	node *pre,*sec;
	public:
		pinnacle_class()
		{
			pre=NULL;
			sec=NULL;
		}
	void create();	
	void display();
	void insert_pre();
	void insert_sec();
	void insert_mid();
	node *csearch(int k);
	void count_mem();
	void reverse();
	void reverse_recersive(node *temp);
	void cancle();
	void concate(pinnacle_class a,pinnacle_class b);
};
void pinnacle_class::create()
{
	int x,ans;
	char n[10];
	node *nn;
	do
	{
		cout<<"entre prn";
		cin>>x;
		cout<<"enter name";
		cin>>n;
		nn=new node(x,n);
		if(pre==NULL)
		{
			pre=nn;
			sec=nn;
		}
		else
		{
			sec->next=nn;
			sec=nn;
		}
		cout<<"do you want to add more(press 1)";
		cin>>ans;
	}while(ans==1);
}
void pinnacle_class::display()
{
	node *temp;
	temp=pre;
	while(temp!=NULL)
	{
	cout<<"prn : "<<temp->prn<<endl;
	cout<<"name : "<<temp->name<<endl;
	temp=temp->next;
	}
}
void pinnacle_class::insert_pre()
{
	int x;
	char n[100];
	cout<<"enter the prn: ";
	cin>>x;
	cout<<"enter the name: ";
	cin>>n;
	node *nn;
	
	if(pre==NULL)
	{
		cout<<"enter the list first";
	}
	else
	{
		nn=new node(x,n);
		nn->next=pre;
		pre=nn;
	}
}
void pinnacle_class::insert_sec()
{
	int x;
	char n[100];
	node *nn;
	cout<<"entre the prn of new seceratory: ";
	cin>>x;
	cout<<"entre the name of secratory: ";
	cin>>n;
	if(sec==NULL)
	{
		cout<<"entre the linked first\n";
	}
	else
	{
		nn=new node(x,n);
		sec->next=nn;
		sec=nn;
		
	}
}
node *pinnacle_class::csearch(int key)
{
	node *temp;
	temp=pre;
	if(temp==NULL)
	{
		cout<<"enter link list first\n";
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->prn==key)
			{
				return temp;
			}
			temp=temp->next;
		}
		return NULL;
	}
}
void pinnacle_class::insert_mid()
{
	int key,x;
	char n[100];
	node *temp,*nn;
	cout<<"enter the number at which you want to insert :";
	cin>>key;
	temp=csearch(key);
	if(temp==NULL)
	{
		cout<<"enter the link list first\n";
	}
	else
	{
		cout<<"enter the prn:";
		cin>>x;
		cout<<"entre the name:";
		cin>>n;
		nn=new node(x,n);
		nn->next=temp->next;
		temp->next=nn;
	}
}
void pinnacle_class::count_mem()
{
	int count;
	node *temp;
	temp=pre;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	cout<<"total numbers of members is : "<<count<<endl;;
}
void pinnacle_class::reverse()
{	
	cout<<"ll in reverse order is\n";
	reverse_recersive(pre);
}
void pinnacle_class::reverse_recersive(node *temp)
{
	if(temp!=NULL)
	{
		reverse_recersive(temp->next);
		cout<<temp->prn<<endl;
	}
}
void pinnacle_class::cancle() 
{
	node *temp;
	int key;
	cout<<"enter the prn you wnat to delete: ";
	cin>>key;
	temp=csearch(key);
	if(temp==NULL)
	{
		cout<<"number not present\n";
	}
	if(temp==pre)
	{
		pre=pre->next;
		temp->next=NULL;
		delete temp;
	}
}
void pinnacle_class::concate(pinnacle_class obj1,pinnacle_class obj2)
{
	pre=obj1.pre;
	obj1.sec->next=obj2.pre;
	sec=obj2.sec;
}
int main()
{
	pinnacle_class o,i,j;
	o.create();
	i.create();
    o.insert_pre();
    o.insert_sec();
	o.insert_mid();
	o.count_mem();
	o.reverse();
	o.cancle();
	j.concate(o,i);
	o.display();
}
