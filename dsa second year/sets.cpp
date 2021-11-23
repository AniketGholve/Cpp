#include<iostream>
using namespace std;
class student
{
    int M,C,B,roll_no[100],croll_no[100],broll_no[100],uni[100],k; 
	public:
	void readdata()
 	{   
		cout<<"Enter the total strength of class\n";
		cin>>M;
		for(int i=0;i<M;i++)
		{
			roll_no[i]=i+1;
		}
		cout<<"enter the total number of cricket players\n";
		cin>>C;			
		cout<<"enter the total number of badminton players\n";
		cin>>B;
	}
	void roll_number()
	{ 
	cout<<"roll numbers of student is\n";
		for(int i=0;i<M;i++)
		{
			cout<<roll_no[i]<<"\n";
		}
	}
	void cricket()
	{	
		cout<<"Enter the roll number of cricket players \n";
	 	for(int i=0;i<C;i++)	
	 	{
	 	cin>>croll_no[i];
		}
	}
	void badmintion()
	{	
		cout<<"Enter the roll number of badminton players \n";
	 	for(int i=0;i<B;i++)	
	 	{
	 	cin>>broll_no[i];
		}
	}
	void cricket_data()
	{
		cout<<"Roll numbers of student who plays cricket is";
		for(int i=0;i<C;i++)
		{
		cout<<croll_no[i];
		}
	}
	void badminton_data()
	{
		cout<<"Roll numbers of student who plays badminton is";
		for(int i=0;i<B;i++)
		{
		cout<<broll_no[i];
		}
	}
	void both()
	{
		cout<<"Roll numbers of student who plays both cricket and badmintion is \n";
		for(int i=0;i<C;i++)
		{
			for(int j=0;j<B;j++)
			{
					if(croll_no[i]==broll_no[j])
					{
						cout<<croll_no[i]<<"\n";
					}	
			}
		
		}		
	}
	void any_one()
	{
		int i,j;
		cout<<"student who plays either cricket or badminton or both is";
		for(k=0;k<C;k++)
		{
			uni[k]=croll_no[k];
		}
		for(i=0;i<B;i++)
		{
			for(j=0;j<C;j++)
			{
				if(croll_no[j]==broll_no[i])
				{
					break;
				}
			}
			if(j==C)
			{
			uni[k]=broll_no[i];	
			k++;
			}	
		}
		for(int h=0;h<k;h++)
		{
			cout<<"\n";
			cout<<uni[h];
		}
	}
	void dont_play()
	{
		int j,i;
		cout<<"\nRoll numbers of student who dont plays cricket and badminton";
		for(i=0;i<M;i++)
		{
			for(j=0;j<k;j++)
			{
				if(roll_no[i]==uni[j])
				{
					break;	
				}
			}
			if(j==k)
				{
				cout<<"\n";	
				cout<<roll_no[i];	
				}			
		}
	}
};
int main() 
{
	int ch,ans;
	student obj;
	obj.readdata();
	obj.roll_number();
	obj.cricket();
	obj.badmintion();
	do
	{
	cout<<"what do you want to cheak\n1:players who play both cricket and badminton\n2:student who playes any one of the game\n";
	cout<<"3:student who do not play any games\n";
	cin>>ch;
	switch(ch)
		{
		case 1:obj.both();
		break;
		case 2:obj.any_one();
		break;
		case 3:obj.dont_play();
		break;
		}
		cout<<"\ndo you want to repeat (if yes press 1)";
		cin>>ans;		
	}while(ans==1);	
}
