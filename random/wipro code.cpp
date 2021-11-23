#include<iostream>
using namespace std;
class name
{
	public:
		void amstrong()
		{
			int num,num1,count=0,sum=0,r,l1=0;
			cout<<"entre the number: ";
			cin>>num;
			num1=num;
			while(num1>0)
			{
				num1=num1/10;
				count++;
			}
			num1=num;
			while(num1!=0)
			{
				int r1=1;
				r=num1%10;
				l1=count;
					while(l1!=0)
					{		
						r1=r1*r;
						l1--;			
					}
				num1=num1/10;
				sum=sum+r1;	
			}
			
			if(sum==num)
			{
				int tsum=0;
				while(sum!=0)
				{
					int num3=sum%10;
					if(num3%2==0)
					{
						tsum=tsum+num3;	
						
					}
					sum=sum/10;
				}
				cout<<tsum;
			}	
			else
			{
				int tsum=0;
				while(num>0)
				{
					int num3=num%10;
					if(num3%2==0)
					{	
					}
					else
					{
						tsum=tsum+num3;
					}
					num=num/10;
				}
				cout<<tsum;
			}
		}
};
int main()
{
	name o;
	o.amstrong();
	
			
}
