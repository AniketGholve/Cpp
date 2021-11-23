#include<iostream>
#include<cmath>
using namespace std;
void rect(int r,int c)
{
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
		cout<<endl;
	}
}
void hollo_rect(int r,int c)
{
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(j==1||j==c||i==1||i==r)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;	
	}
}
void inverted_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void half_pyramid180(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void half_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
}
void floyd_triangle(int n)
{
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}
void butterfly_pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";	
		}	
		int count=(2*n)-(2*i);
		for(int j=1;j<=count;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";	
		}	
		int count=(2*n)-(2*i);
		for(int j=1;j<=count;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void inverted_pattern(int n)
	{
		for(int i=1;i<=n;i++)
		{
			int count=1;
			for(int j=n;j>=i;j--)
			{
				cout<<count++;
			}
			cout<<endl;
		}
	}
void _10pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<j%2;
			}
		}
		else
		{
			for(int j=0;j<i;j++)
			{
				cout<<j%2;
			}
		}
		cout<<endl;
	}
}

void rombus(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
void number_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		int count=1;
		for(int j=1;j<=i;j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}
void palindrom_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
		int count=i;
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<count--;
		}
		for(int j=2;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
void star_pyramid(int n)
{
	for(int i=1;i<=n;i++)
	{
			for(int j=n;j>=i;j--)
			{
				cout<<" ";
			}
			for(int j=1;j<=2*i-1;j++)
			{
				cout<<"*";	
			}
			cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
			for(int j=n;j>=i;j--)
			{
				cout<<" ";
			}
			for(int j=1;j<=2*i-1;j++)
			{
				cout<<"*";	
			}
			cout<<endl;
	}
}
void zigzag_pattern(int n)
{
	int n1=sqrt(n);
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int k=i+j;
			if(k%4==0||(i==2 && j%4==0))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";	
			}		
		}
		cout<<endl;	
	}	
}
int main()
{
	//rect(5,4);
	//hollo_rect(5,4);
	//inverted_pyramid(5);
	//half_pyramid(5);
	//floyd_triangle(5);
	//butterfly_pattern(4);
	//inverted_pattern(5);
	//_10pattern(5);
	//rombus(5);
	//number_pyramid(5);
	//palindrom_pyramid(5);
	//star_pyramid(4);
	zigzag_pattern(9);
}
