#include<iostream>
using namespace std;
class name
{
	int cnum,esum=0,osum=0,sum,num=0;
	public:
		void input()
		{
			cout<<"Entre the number you want average of consective even and odd : ";
			cin>>cnum;
		}
		void even()
		{
			for(int i=0;i<=cnum;i++)
			{
				if(i%2==0)
				{
					esum=esum+i;
				}
			}
		}
		void odd()
		{
			for(int i=0;i<=cnum;i++)
			{
				 num=(2*i)+1;
				if(num<=cnum)
				{
					osum=osum+num;
				}
			}
		}
		void output()
		{
			input();
			even();
			odd();
			sum=osum+esum;
			cout<<sum;
		}
};
int main()
{
	name o;
	o.output();
}
