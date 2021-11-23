#include<iostream>
using namespace std;
class se
{
	private:
		int rollno[10],cric[10],bad[10],a[20],n,c,b,k;
	public:
		void read()
		{
			cout<<"enter the number of student in class : ";
			cin>>n;
			cout<<"entre the number of student plays cricket : ";
			cin>>c;
			cout<<"enter the number of student plays badmintion : ";
			cin>>b;
			for(int i=0;i<n;i++)
			{
				rollno[i]=i+1;
			}
			cout<<"entre the roll number of student who plays cricket\n";
			for(int j=0;j<c;j++)
			{
				cin>>cric[j];
			}
			cout<<"entre the roll number of student who plays badminton\n";
			for(int j=0;j<b;j++)
			{
				cin>>bad[j];
			}
		}
		void uni()
		{
			int i,r,j,k=0;
			for(i=0;i<c;i++)
			{
				a[i]=cric[i];	
			}
			for(j=0;j<b;j++)
			{
				for(r=0;r<c;r++)
				{
					if(cric[r]==bad[j])	
					{
						break;
					}
				}
			}
			if(r==c)
			{
				a[r]=bad[i];
				r++;
			}
			cout<<"cricket and badminton players is :"; 
			for(int y=0;y<r;y++)
			{
				cout<<a[y]<<" ";
			}
		}
		void inter()
		{
			int i,j,k;
			for(i=0;i<c;i++)
			{
				for(j=0;j<b;j++)
				{
					if(cric[i]=bad[j])
					{
						cout<<cric[i];
					}
				}
			}
		}
		void dontplay()
		{
			int i,j;
			for(i=0;i<n;i++)
			{
				for(j=0;j<k;j++)
				{
					if(a[j]==rollno[i])
					{
						break;
					}
				}
			}
			if(j==k)
			{
				cout<<rollno[i];
			}
		}
		
};
int main()
{			
	se o;
	o.read();
	o.inter();
	o.uni();
	o.dontplay();
}
		
