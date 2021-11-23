#include<iostream>
#include<stdlib.h>
using namespace std;                                                  //NAME-SOUMYA GOYAL
class set_operations                                                  //ROLL NO.-205224
{
private:
  int set_a[10],set_b[10],set_c[20],set_d[30],set_f[20],set_u[50],set_g[50];
  int ln_a,ln_b,ln_c,ln_d,n,ln_f,ln_g;
public:
    void get_data()
    {
      cout<<"\n total number of students are\n";
      cin>>n;
      cout<<"\n length of set A\n";
      cin>>ln_a;
      cout<<"\n enter the member of set A\n";
      for (int i=0;i<ln_a;i++)
        {
            cin>>set_a[i];
        }
      cout<<"\n length of set B\n";
      cin>>ln_b;
      cout<<"\n enter the member of set B\n";
      for (int j=0;j<ln_b;j++)
        {
            cin>>set_b[j];
        }
    }
    void union_operations()
    {
      int k=0;
      for(int i=0;i<ln_a;i++)
        {
            set_f[k]=set_a[i];
            k++;
        }
      int i;
      for(int j=0;j<ln_b;j++)
        {
            for(i=0;i<ln_a;i++)
        {
            if (set_a[i]==set_b[j])
            {
                break;
            }
        }
        if (i==ln_a)
        {
            set_f[k]=set_b[j];
            k++;
        }
        }
        ln_f=k;
    }
    void display_union()
    {
        cout<<"\nstudent either cricket or badminton\n";
        for(int k=0;k<ln_f;k++)
        {
            cout<<set_f[k]<<"\t";
        }
    }
    void intersection_data()
    {
        int k=0;
        for(int j=0;j<ln_b;j++)
        {
            for(int i=0;i<ln_a;i++)
            {
                if(set_a[i]==set_b[j])
		        {
                  set_d[k]=set_a[i];
                  k++;
		        }
            }
        }
        ln_d=k;
    }
    void display_intersection()
    {
        cout<<"\nstudent play both cricket and badminton\n";
        for(int k=0;k<ln_d;k++)
        {
            cout<<set_d[k]<<"\t";
        }
    }
    void diff(int a[],int b[],int la,int lb)
    {
       int j=0,i;
       for(int k=0; k<la; k++)
       {
           for(i=0;i<lb;i++)
           {
               if(a[k]==b[i])
                {
                    break;
                }
           }
	    if(i==lb)
	    {
         set_c[j]=a[k];
		 j++;
	    }
       }
       ln_c=j;
       for(int j=0;j<ln_c;j++)
       {
           cout<<set_c[j]<<"\t";
       }
    }
    void universal_operation()
    {
       int k=0,j,i;
       for(i=1;i<=n;i++)
       {
           for(j=0;j<ln_f;j++)
           {
               if(i==set_f[j])
               {
                   break;
               }
           }
           if(j==ln_f)
           {
               set_g[k]=i;
               k++;
           }
       }
       ln_g=k;
       cout<<"\n the stuents who neither play cicket nor badminton are\n";
       for(int i=0;i<ln_g;i++)
       {
           cout<<set_g[i]<<"\t";
       }
    }
    void display_data()
    {
        cout<<"\nstudents plays cricket\n";
        for(int i=0;i<ln_a;i++)
        {
            cout<<set_a[i]<<"\t";
        }
        cout<<"\nstudents plays badminton\n";
        for(int i=0;i<ln_b;i++)
        {
            cout<<set_b[i]<<"\t";
        }
    }
    void substraction_a_b()
    {
      cout<<"\nset of students play cricket only\n";
      diff(set_a,set_b,ln_a,ln_b);
    }
    void substraction_b_a()
    {
      cout<<"\nset of students play badminton only\n";
      diff(set_b,set_a,ln_b,ln_a);
    }
};
int main()
{
    set_operations obj;
    obj.get_data();
    obj.display_data();
    int m;
while(1)
{
  cout<<"\n Enter\n 1.To get the roll no. of students playing either cricket or badminton or both \n 2. the roll no. of students playing either cricket or badminton or both\n 3.To get roll no. of students who only play cricket  \n 4.To get roll no. of students who only play badminton \n 5. To get roll no. of students who neither play cricket nor football\n 6.To exit\n";
  cin>>m;
  switch (m)
  {
  case 1:
  obj.union_operations();
  obj.display_union();
  break;
  case 2:
  obj.intersection_data();
  obj.display_intersection();
  break;
  case 3:
  obj.substraction_a_b();
  break;
  case 4:
   obj.substraction_b_a();
  break;
  case 5:
   obj.universal_operation();
  break;
  case 6:
      exit(0);
  }
}
}
