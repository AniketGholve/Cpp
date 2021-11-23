#include<iostream>
using namespace std;
class node
{
	node *left,*right;
	int data;
	public:
		node(int a)
		{
			left=NULL;
			right=NULL;
			data=a;
		}
		friend class heap;
};
class heap
{
	node *root;
	int ans;
	public:
		heap()
		{
			root=NULL;
		}
		void insert()
		{
			node *nn,*temp;
			int key,flag;
			do
			{
			cout<<"enter the marks of student : ";
			cin>>key;
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
					flag=0;
					if(temp->left!=NULL && temp->right!=NULL)
					{
						temp=temp->left;
						flag=0;
					}
					if(temp->left==NULL && temp->right==NULL)
					{
						temp->left=nn;
						flag=1;
						break;
					}
					else
					{
						if(temp->left!=NULL)
						{
							if(temp->right==NULL)
							{
								temp->right=nn;
								flag=1;
								break;
							}
							temp=temp->left;
						}
						if(temp->right!=NULL)
						{
							if(temp->left==NULL)
							{
								temp->left=nn;
								flag=1;
								break;
							}
							temp=temp->right;
						}
					}
				}while(flag==0);
			}
			cout<<"want to cont press 1 : ";
			cin>>ans;
			}while(ans==1);
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
		node *getroot()
		{	
			return root;
		}
};
int main()
{
 heap s;
 s.insert();
 s.inorder(s.getroot());	
}
