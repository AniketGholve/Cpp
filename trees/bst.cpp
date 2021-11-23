#include<iostream>
#include<queue>
using namespace std;
class node
{
	int data;
	node *left;
	node *right;
	public:
		node(int a)
		{
			data=a;
			left=NULL;
			right=NULL;
		}
	friend class bst;	
};
class bst
{

	int key,flag,key1;
	public:
	node *root,*temp,*nn;	
	bst()
	{
		root=NULL;	
	}
	void insert()
	{
		
		cout<<"entre the data you want to insert : ";
		cin>>key;
		nn=new node(key);
		if(root==NULL)
		{
			root=nn;
			cout<<"root inserted \n";
		}
		else
		{
			temp=root;
			do
			{
				
				if(key<temp->data)
				{
					if(temp->left!=NULL)
					{
						temp=temp->left;
						flag=0;	
					}
					else
					{
						temp->left=nn;
						cout<<"node inserted \n";
						flag=1;
					}
				}
				if(key>temp->data)
				{
					if(temp->right!=NULL)
					{
						temp=temp->right;
						flag=0;	
					}
					else
					{
						temp->right=nn;
						cout<<"node inserted \n";
						flag=1;
					}	
				}
			}while(flag==0);
		}
	}
	void inorder(node *root)
	{	
		if(root!=NULL)
		{
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);	
		}
	}
	void search()
	{
		
		int flag;
		cout<<"enter the value for search : ";
		cin>>key1;
		temp=root;
		flag=0;
		while(temp!=NULL)
		{
			if(key1==temp->data)
			{
				flag=1;
				cout<<"data found \n";
				break;
			}
			if(key1<temp->data)
			{
				temp=temp->left;
			}
			else
			{	
				temp=temp->right;
			}
		}
		if(flag==0)
		{
			cout<<"data not found \n";
		}
	}
	void min()
	{
		temp=root;
		while(temp->left!=NULL)
		{
			temp=temp->left;	
		}
		cout<<"minimum value is : "<<temp->data;	
	}
node* mirror(node*root)
	{
		node *temp;
			if(root!=NULL)
			{
				temp=root->left;
				root->left=root->right;
				root->right=temp;
				mirror(root->left);
				mirror(root->right);
			}			
	}
 void longest_path()
 {
 	int i=0;
 	node*temp;
 	queue<node*>q;
	 q.push(root);
	 q.push(NULL);
	 while(!q.empty())
	 {
	 	temp=q.front();
		 q.pop();
		 if(temp==NULL)
		 {
		 	i++;
		 	if(!q.empty())
		 	{
		 		q.push(NULL);
			 }
		 }
		 else
		 {
			if(temp->left!=NULL)
			{
				q.push(temp->left);
			}
			if(temp->left!=NULL)
			{
				q.push(temp->right);	
			} 	
		 }	
	 }
	 cout<<"longest path is : "<<i+1<<endl;	 
 }				
};
int main()
{
	int ans;
	bst s;
	do
	{
	s.insert();
	cout<<"want to add more (press 1) : ";
	cin>>ans;
	}while(ans==1);
	cout<<"inorder traversel of bst : ";
	s.inorder(s.root);
	cout<<"\n";
	s.search();
	s.min();
	s.mirror(s.root);
		cout<<"\n";
	s.inorder(s.root);
		cout<<"\n";
	s.longest_path();	
}
