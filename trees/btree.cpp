#include <iostream>
#include<stack>
using namespace std;
class node
{
		int data;	
		node* left;
		node* right;
public:
	node(int a)
	{
		data=a;	
		left=NULL;
		right=NULL;
	}
	friend class btree;
};
class btree
{
node *root,*temp,*nn;
int key,flag;
char ans;
public:
	btree()
	{
	root = NULL;
	}
	
	void insert()
	{
	cout<<"\nentre the data: ";
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
	    		
		cout<<"\nwhere do you want to insert of"<<temp->data<<": ";
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
	  			cout<<"\nnode added";
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
					cout<<"node added\n";
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
     void preorder(node* root)
     {
     	if(root!=NULL)
     	{
     	   cout<<root->data<<" ";
     	   preorder(root->left);
     	   preorder(root->right);		
     	}
     }
     void postorder(node* root)
     {
     if(root!=NULL)
     {
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";
     }
     }
     void display()
     {
     	cout<<"inorder : ";
     	inorder(root);
     	cout<<endl;
     	cout<<"postorder : ";
     	postorder(root);
     	cout<<endl;
     	cout<<"preorder : ";
     	preorder(root);
     	cout<<endl;
     	non_rec_inorder(root);
     }
     void non_rec_inorder(node*root)
     {
     	
     	stack<node*>t;
     	temp=root;
     	cout<<"non rec inorder : ";
     	while(temp!=NULL||!t.empty())
     	{
     		if(temp!=NULL)
     		{
     			t.push(temp);
     			temp=temp->left;
     		}
     		else
     		{
     			temp=t.top();
     			t.pop();
     			cout<<temp->data<<" ";
     			temp=temp->right;
     		}
     	}
     	
     }
};
int main()
{
int ans;
btree s;
do
{
s.insert();
cout<<"\nwant to cont press 1";
cin>>ans;
}while(ans==1);
s.display();
return 0;
}
