#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class book
{	private:
	int n1,i,num,cost,sn;
	char *name;
	char *author;
	public:

	void getdata(){
	cout<<"\nEnter title: "; 
	cin>>name;
	cout<<"\nEnter Author Name: ";
	cin>>author;	
	cout<<"\nEnter Cost: "; 
	cin>>cost;	
	cout<<"\nEnter Stock number: ";
	cin>>sn;
	}

	void display(){
	
	cout<<"Title of book-"<<setw(13)<<name<<endl;
    	cout<<"Author of book-"<<setw(12)<<author<<endl;
    	cout<<"Cost is-"<<setw(18)<<cost<<endl;
    	cout<<"No. of books available-"<<setw(2)<<sn<<endl;
    	cout<<"----*----*----*----*----*----"<<endl;
	}
	
	int search(char t[20],char a[20])
	{
	    if(strcmp(name,t)==0&&(strcmp(author,a)==0))
		{
		cout<<"\n----Book Found----"<<endl;
	       return 1;
	    }
	    else{

		cout<<"\n----Book not Found----"<<endl;
	       return 0;
        }   
   }
		
	void bill(int h)
	{
	   	  int g;
          if(h==1){
	      cout<<"Number of books is "<<sn<<"\nEnter number of books required";
	      cin>>g;
	      cout<<"Cost of books is "<<g*cost<<endl;
	    }
	    else if(h==0){
	      cout<<"Book is not available\n";
      	}
	}

	book(){
      name=new char[20];
      author= new char[20]; 
    }
    ~book(){}
     };
  
int main()
{
	book b[20];
	int a,i,z,f;
	char name[20];
	char aname[20];
	cout<<"Enter number of books\n";
	cin>>a;
	for(i=0;i<a;i++){
		b[i].getdata();
	  }
	for(i=0;i<a;i++)
	  {
		b[i].display();
	  }
		cout<<"\nEnter name of book and author to be found: ";
		cin>>name>>aname;
	
	for(i=0;i<a;i++){
		z=b[i].search(name,aname);
			if(z==1){
			f=i;
            b[f].display();   
            b[f].bill(z);
			break;
			}
                    
		}

        if(z==0){
        cout<<"Not available"; 
        }
	return(0);
}

