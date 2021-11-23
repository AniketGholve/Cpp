#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int rno,div;
	char name[50],adr[50];
	public:
		void getdata()
		{
			cout<<"entre the name of the student : ";
			cin.ignore();
			cin.getline(name,50);
			cout<<"entre the roll number of the student : ";
			cin>>rno;
			cout<<"entre the division of the student : ";
			cin>>div;
			cout<<"enter the address of the student : ";
			cin.ignore();
			cin.getline(adr,50);
		}
		void showdata()
		{
			cout<<"name of the student : "<<name<<endl;
			cout<<"roll number of student : "<<rno<<endl;
			cout<<"division of student : "<<div<<endl;
			cout<<"address of student : "<<adr<<endl;
		}
		int getroll()
		{
			return rno;
		}
};
class student_info
{
	public:
	student s;
	int rno1;
	fstream file,file1; 	
	void input()
	{
		file.open("student_info.txt",ios::binary|ios::app);
		s.getdata();
		file.write((char*)&s,sizeof(s));
		file.close();
	}
	void display()
	{
		file.seekg(0);
		file.open("student_info.txt",ios::binary|ios::in);
		while(file.read((char*)&s,sizeof(s)))
		{
			s.showdata();
		}
		file.close();
	}
	int search()
	{
		int i;
		cout<<"entre the roll number to search : ";
		cin>>rno1;
		file.open("student_info.txt",ios::binary|ios::app|ios::in|ios::out);
		file.seekg(0);
		while(file.read((char*)&s,sizeof(s)))
		{
			if(s.getroll()==rno1)
			{
				cout<<"data found "<<endl;
				s.showdata();
				i=1;
				return i;
				break;
			}
			else
			{
				i=0;
				return i;
			}
		}
		if(i==0)
		{
			cout<<"no data found"<<endl;
		}
		file.close();
	}
	void delete1(int z)
	{
		int r;
		r=z;
		if(r==1)
		{
			file.open("student_info.txt",ios::binary|ios::app|ios::in|ios::out);
			file1.open("temp.txt",ios::binary|ios::app|ios::in|ios::out);
			while(file.read((char*)&s,sizeof(s)))
			{
				if(s.getroll()!=rno1)
				{
					file1.write((char*)&s,sizeof(s));
				}
			}
			file.close();
			file1.close();
			remove("student_info.txt");
			rename("temp.txt","student_info.txt");
			
		}
		if(r==0)
		{
			cout<<"delete not dont"<<endl;
		}
	}
};
int main()
{
	student_info s;
	int ch,ans,z;
    do
    {
    	cout<<"what do you want to do:"<<endl;
    	cout<<"1:insert data"<<endl;
    	cout<<"2:display data"<<endl;
   		cout<<"3:search data"<<endl;
     	cout<<"4:delete data"<<endl;
    	cin>>ch;
		switch(ch)
		{
			case 1:s.input();
				   break;
			case 2:s.display();
				   break;
			case 3:s.search();	   
				   break;
			case 4:z=s.search();
					 s.delete1(z);
		   		   
		}
		cout<<"do you want to cont (press 1)";
		cin>>ans;
	}while(ans==1);
	return 0;
}
