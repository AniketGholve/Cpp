#include<iostream>
using namespace std;
class undirectedgraph
{
	int v,e;
	int mat[50][50];
	public:
		void matrix()
		{
			cout<<"enter the number of virtices : ";
			cin>>v;
			for(int i=0;i<v;i++)
			{
				for(int j=0;j<v;j++)
				{
					mat[i][j]=0;
				}
			}
		}
		void edge()
		{
			int v1,v2,ans;
			do		
			{
				cout<<"entre the first virtices of the edge : ";
				cin>>v1;
				cout<<"entre the second virtices of the edge : ";
				cin>>v2;
				v1=v1-1;
				v2=v2-1;
				if(mat[v1][v2]==0 && mat[v2][v1]==0)
				{
					mat[v1][v2]=1;
					mat[v2][v1]=1;
				}
				else
				{
					cout<<"edge is present \n";
				}
				cout<<"want to add more edge to graph press 1 :  ";
				cin>>ans;
			}while(ans==1);
		}
		void display()
		{
			for(int i=0;i<v;i++)
			{
				for(int j=0;j<v;j++)
				{
					cout<<mat[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	undirectedgraph s;
	s.matrix();
	s.edge();
	s.display();
}
