#include<iostream>
#include<string.h>
using namespace std;
class node
{
	char data[2];
	node *left;
	node *right;
	public:
		node(char a[2])
		{
			strcpy(data[2],a[2]);
			left=NULL;
			right=NULL;
		}
	friend class bst;	
};
class bst
{

	char key[2],
	int flag;
	public:
	node *root,*temp,*nn;	
	bst()
	{
		root=NULL;	
	}
	void insert()
	{
		
		cout<<"entre the data you want to insert : ";
		cin>>key[2];
		nn=new node(key[2]);
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
				
				if(key[2]<temp->data)
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
				if(key[2]>temp->data)
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
};
int main()
{
	bst s;
	s.insert();
	s.inorder(s.root);
}
