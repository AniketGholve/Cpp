#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class story
{
	public:
		void write()
		{
			ofstream outfile;
			outfile.open("story.txt",ios::out);
			outfile<<"the rose is red\n";
			outfile<<"a girl is playing\n";
			outfile<<"aniket\n";
			outfile<<"the aniket";
			outfile.close();
		}
		void read()
		{
			char name[100];
			int count=0;
			ifstream infile;
			infile.open("story.txt",ios::in);
			while(!infile.eof())
			{
				infile.getline(name,100);
				if(name[0]!='a')
				{
					cout<<name<<"\n";
					count++;
				}
			}
			cout<<"total number of line starting without letter a = "<<count<<"\n";
		}
};
int main()
{		
	story x;
	int ch,a;
	do	
	{
	cout<<"\n1:for writting data into the file\n2:for read data of file\n3:exit";
	cin>>ch;
	switch(ch)
	{
		case 1:x.write();
		break;
		case 2:x.read();
		break;
		case 3:exit(0);
	}
	cout<<"cont press 1";
	cin>>a;
	}while(a==1);
	return 0;
}
