#include<iostream>
using namespace std;
class node
{
	node *left,*right;
	int data;
	public:
		node(int d)
		{
			data=d;
			left=NULL;
			right=NULL;
		}
		friend class tree;
};
class tree
{
	
	public:
		node *root;
		tree()
		{
			root=NULL;
		}
		void insert()
		{
			int d;
			cout<<"Entre the data : ";
			cin>>d;
			node *nn=new node(d);
			if(root==NULL)
			{
				root=nn;
			}
			else
			{
				node *temp=root;
				char lr;
				int flag=0;
				do{
					cout<<"Where do you want to insert : ";
					cin>>lr;
					if(lr=='l')
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
					else if(lr=='r')
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
		}
		void inorder(node *temp)
		{
			if(temp==NULL)
			{
				return;
			}
			inorder(temp->left);
			cout<<temp->data<<" ";
			inorder(temp->right);	
		}
};
int main()
{
	tree o;
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.inorder(o.root);
}
