#include<iostream>
using namespace std;
class node
{
	int data;
	node *left,*right;
	public:
		node(int x)
		{
			data=x;
			left=NULL;
			right=NULL;
		}	
		friend class trees;	
};
class trees
{
	int d;
	
	public:
		node *root;
		trees()
		{
			root=NULL;
		}
		void insert()
		{
			cout<<"Entre the data to insert :";
			cin>>d;
			node *nn=new node(d);
				char lr[1];
				if(root==NULL)
				{
					root=nn;
				}
				else
				{
					node * temp=root;
					char ans;
					int flag=0;
					do{
						cout<<"enter where you waht to insert data of "<<temp->data;
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
								cout<<"node inserted"<<endl;
								flag=1;
							}
						}
						else if(ans=='r')
						{
							if(temp->right!=NULL)
							{
								temp=temp->right;
								flag=0;
							}
							else
							{
								temp->right=nn;
								cout<<"node inserted"<<endl;
								flag=1;
							}
						}
					}while(flag==0);
				}
		}
	void inorder(node* temp)
	{
	    if (temp == NULL)
        return;
 
	    inorder(temp->left);
	    cout << temp->data << " ";
	    inorder(temp->right);
	}
};
int main()
{
	trees o;
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.insert();
	o.inorder(o.root);	
}
