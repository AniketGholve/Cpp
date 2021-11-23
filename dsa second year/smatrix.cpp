#include<iostream>
using namespace std;
class matrix
{
	int s[10][10],m,n,i,j,t,element;
	public:
	void read()
	{
		cout<<"entre the rows and coloums of matrix";
		cin>>m>>n;
		t=0;
		cout<<"enter the matrix";
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>element;
				if(element!=0)
				{
					t=t+1;
					s[t][1]=i;
					s[t][2]=j;
					s[t][3]=element;
				}
			}
		}
	}
	void display()
	{
		cout<<"sparse matrix is ";
		for(int k=0;k<t;k++)
		{
			cout<<s[k][1]<<" "<<s[k][2]<<" "<<s[k][3];				
		}
	}
};
int main()
{
	matrix o;
	o.read();
	o.display();
}
