#include<iostream>
#include<string.h>
using namespace std;
class node
{
	char data[50];
	node *left,*right;
	public:
		node(char a[50])
		{
			strcpy(data,a);
			left=NULL;
			right=NULL;
		}
		friend class book;
};
class book
{
	node *root,*nn;
	char key[50],ans;
	node*temp;
	int flag;
		int ans1;
	public:
	book()
	{
		root=NULL;		
	}
	node *getroot()
	{
		return root;
	}
	void insert()
	{
		do
		{
			cout<<"enter the data you want to insert : ";
			cin.getline(key,50);
			nn=new node(key); 
			if(root==NULL)
			{
				root=nn;
			}
			else
			{
				temp=root;
				do
				{
				cout<<"where do you want to insert of "<<temp->data;
				cin>>ans;
					if(ans=='l')
					{
						if(temp->left!=NULL)
						{
							temp=temp->left;
							flag=0;
						}
						else
						{
							temp->left=nn;
							flag=1;
						}
					}
					if(ans=='r')
					{
						if(temp->right!=NULL)
						{
							temp=temp->right;
							flag=0;
						}
						else
						{
							temp->right=nn;
							flag=1;
						}
					}
				}while(flag==0);
			}
			cout<<"want to cont press 1";
			cin>>ans1;
			cin.ignore();
		}while(ans1==1);
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
	book s;
	s.insert();
	s.inorder(s.getroot());
}
