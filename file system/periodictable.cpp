#include<iostream>
#include<fstream>
using namespace std;
class periodic_table
{
	char element[50];

	char symbol[5];
	public:
			int ano;
	void insert()
	{
		cout<<"*****************************insert data***************************************\n";	
		cout<<"element name : ";
		cin>>element;
		cout<<endl;
		
		cout<<"atomic number : ";
		cin>>ano;
		cout<<endl;
		
		cout<<"Symbol : ";
		cin>>symbol;
		cout<<endl;
	} 
	void display()
	{
		cout<<element<<endl;
		cout<<ano<<endl;
		cout<<symbol<<endl;
	}
	void dislpay_ele_names()
	{
		cout<<element<<endl;
	}
};
class filesave
	{
		fstream file;
		periodic_table s;
		public:
		void getdata()
		{
			file.open("periodic_table.txt",ios::app|ios::in|ios::out);
			s.insert();
			file.write((char*)&s,sizeof(s));
			file.close();
		}
		void search()
		{
			int key,flag=0;
			cout<<"entre the atomic number of element to search : ";
			cin>>key;
			file.open("periodic_table.txt",ios::app|ios::in|ios::out);
			file.seekg(0);
			while(file.read((char*)&s,sizeof(s)))
			{
				if(key==s.ano)
				{
					flag=1;
					file.close();
					break;
				}
				else
				{
					flag=0;
				}
			}
			if(flag==1)
			{
				s.display();
			}
			else
			{
				cout<<"no data found \n";
				file.close();
			}
		}
		void element_names()
		{
			file.open("periodic_table.txt",ios::app|ios::in|ios::out);
			file.seekg(0);
			cout<<"***************element name***************** "<<endl;
			while(file.read((char*)&s,sizeof(s)))
			{
				s.dislpay_ele_names();
			}	
		}
	};
int main()
{
	periodic_table s;
	filesave d;
	int ch,ans;
	do
	{
	cout<<"select from the below list\n1:insert data in periodic table\n2:search data in periodic table\n3:name of the elemants\n";
	cin>>ch;	
		switch(ch)
		{
			case 1:d.getdata();
			   break;
			case 2:d.search();
		 	  break;	
			case 3:d.element_names();
			   break;
			default:cout<<"wrong choice\n";
			break;   	
		}
	cout<<"do you want to continue(press 1) : ";
	cin>>ans;
	system("CLS");
	}while(ans==1);
}

