#include<iostream>
using namespace std;
class matrix
{
	private:
		int a[10][10],a2[10][10],a3[10][10];
		int i,j,r,c,r1,c1;		
	public:
		void read()
		{
			cout<<"enter the rows and coloum of first matrix";
			cin>>r>>c;
			cout<<"entre the elements of matrix \n";
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"enteh the rows and coloum of first matrix";
			cin>>r1>>c1;
			cout<<"entre the elements of matrix \n";
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					cin>>a2[i][j];
				}
			}
		}
		void display()
		{
			cout<<"first matrix is\n";
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
			}
			cout<<"second matrix is\n";
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					cout<<a2[i][j]<<" ";
				}
					cout<<"\n";
			}
		}
		void add()
		{
			if(r==r1&&c==c1)
			{
				cout<<"addition of two matrix is\n"; 
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<c;j++)
					{
						a3[i][j]=a[i][j]+a2[i][j];
					}
				}
				result();
			}
			else
			{
				cout<<"addition not possible\n";
			}
		}
		void sub()
		{
			if(r==r1&&c==c1)
			{
				cout<<"substraction of two matrix is\n"; 
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<c;j++)
					{
						a3[i][j]=a[i][j]-a2[i][j];
					}
				}
				result();
			}
			else
			{
				cout<<"substraction not possible\n";
			}
		}
		void result()
		{
				for(int k=0;k<r1;k++)
				{
					for(int l=0;l<c1;l++)
					{
						cout<<a3[k][l]<<" ";
					}
					cout<<"\n";
				}
		}
		void mul()
		{ 
			int sum=0;
			if(r==c1&&c==r1)
			{
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<c1;j++)
					{
						sum=0;
						for(int k=0;k<r1;k++)
						{
						sum=sum+a[i][k]*a2[k][j];
						a3[i][j]=sum;
						}
					}
				}result();
			}
		}
		void transpose()
		{
			
			cout<<"transpose of the first matrix is\n";
			for(int i=0;i<c;i++)
			{
				for(int j=0;j<r;j++)
				{
					cout<<a[j][i]<<" ";		
				}
				cout<<"\n";
			}	
		}
		void upper_tringular()
		{ int flag=0;
			for(int i=0;i<c;i++)
			{
				for(int j=0;j<r;j++)
				{
					if(i>j && a[i][j]==0)
					{
						flag=1;	
						break;
					}
				}
			}
			if(flag==0)
			{
				cout<<"\nmatrix is upper triangular matrix";
			}
			else
			{
				cout<<"matrix is not upper triangular matrix";
			}
		}
		
};
int main()
{
	matrix o;
	o.read();
	o.display();
/*    o.add();
	o.sub();
	o.mul();*/
	//o.transpose();
	o.upper_tringular();
	
}
