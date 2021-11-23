#include<iostream>
using namespace std;
class name
{
	public: 
	void triangle()
	{
		int n;
		cout<<"entre the size of triangle";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int k=0;k<n-i;++k)
			{
				cout<<" ";
			}
			for(int j=1;j<=i;j++)
			{
				cout<<2*j+1;			
			}
			cout<<endl;
		}
	}
};
int main()
{
	name o;
	o.triangle();
}
