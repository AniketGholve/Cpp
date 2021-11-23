#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class member
{
private:
    char name[20],prn[20];
    member *next;
public:
    void set_name(char n[20])
    {
         strcpy(name,n);
    }
    void set_prn(char p[20])
    {
        strcpy(prn,p);
    }
    void set_next(member *n)
    {
        next=n;
    }
    char* get_name()
    {
        return name;
    }
    char* get_prn()
    {
        return prn;
    }
    member* get_next()
    {
        return next;
    }
    member()
    {
        next=NULL;
    }

};
class club
{
private:
    member *head;
public:
    club()
    {
        head=NULL;
    }
    void add_president(int flag,char p[20], char n[20])
    {
        if(flag==0)
        {
            member *new1;
            new1=new member();
            new1->set_name(n);
            new1->set_prn(p);
            if(head==NULL)
            {
                head=new1;
            }
            else
            {
               new1->set_next(head);
               head=new1;
            }
        }
        else
        {
            cout<<"\npresident is already entered\n";
        }
    }
    void add_secretary(int flag,char p[20], char n[20])
    {
        if (flag==0)
        {
            member *new1,*temp;
            new1=new member();
            new1->set_name(n);
            new1->set_prn(p);
            if(head==NULL)
            {
                head=new1;
            }
            else
            {
                temp=head;
                while(temp->get_next()!= NULL)
                {
                   temp=temp->get_next();
                }
                temp->set_next(new1);
            }
        }
        else
        {
            cout<<"\n secretary is already entered \n";
        }
    }
    void add_normal_member(int flag,int flag1,char p[20], char n[20])
    {
        member *new1,*temp;
        new1=new member();
        new1->set_name(n);
        new1->set_prn(p);
        if(flag==0&&flag1==0)
        {
            if(head==NULL)
            {
                head=new1;
            }
            else
            {
                temp=head;
                while(temp->get_next()!= NULL)
                {
                   temp=temp->get_next();
                }
                temp->set_next(new1);
            }
        }
        else if(flag1==0)
        {
            temp=head;
            while(temp->get_next()!= NULL)
            {
                temp=temp->get_next();
            }
            temp->set_next(new1);
        }
        else if(flag==0)
        {
            new1->set_next(head);
            head=new1;
        }
        else
        {
            temp=head;
            new1->set_next(temp->get_next());
            temp->set_next(new1);
        }
    }
    void delete_member()
    {
        member *temp,*prev;
        int r;
        char searchkey[20];
        cout<<"\n enter the prn of member who wants to cancel membership\n";
        cin>>searchkey;
	    prev=new member();
        temp=head;
	    r= strcmp(searchkey,temp->get_prn());
        if(r==0)
	    {
	      head=temp->get_next();
	      temp->set_next(NULL);
	      delete(temp);
	    }
	    else
	    {
	      prev=head;
	      temp=head->get_next();
          while(temp!=NULL)
          {
            r= strcmp(searchkey,temp->get_prn());
            if(r==0)
            {
                prev->set_next(temp->get_next());
                temp->set_next(NULL);
                delete(temp);
                break;
            }
            prev=temp;
            temp=temp->get_next();
          }
          if(temp==NULL)
	      {
	        r= strcmp(searchkey,temp->get_prn());
	        if(r==0)
	        {
	          prev->set_next(NULL);
	          delete(temp);
	        }
	      }
	    }
        if(r!=0)
	    {
	      cout<<"\n member not present in list\n";
	    }
    }
    void calculating_member()
    {
         member *temp;
         int counter=0;
         temp=head;
         while(temp!=NULL)
         {
             counter++;
             temp=temp->get_next();
         }
         cout<<"\n total number of members is \n";
         cout<<counter;
    }
    void display_list()
    {
        member *temp;
        temp=head;
	    cout<<"(president)";
        while(temp->get_next()!=NULL)
        {
             cout<<"("<<temp->get_name()<<","<<temp->get_prn()<<")"<<"-->";
             temp=temp->get_next();
        }
        cout<<"("<<temp->get_name()<<","<<temp->get_prn()<<")(secretary)\n";
    }
    void reverse_display(member *temp)
    {
        if(temp->get_next()==NULL)
        {
           cout<<"("<<temp->get_name()<<","<<temp->get_prn()<<")";
           return;
        }
        else
        {
           reverse_display(temp->get_next());
           cout<<"-->("<<temp->get_name()<<","<<temp->get_prn()<<")";
        }
    }
    void reverse_call()
    {
        reverse_display(head);
    }
    void concatente(club s,club r)
    {
        member *temp,*temp1,*new1;
        temp1=s.head;
        while(temp1!=NULL)
        {
            new1=new member();
            new1->set_name(temp1->get_name());
            new1->set_prn(temp1->get_prn());
            if(head==NULL)
            {
                head=new1;
            }
            else
            {
                temp=head;
                while(temp->get_next()!=NULL)
                {
                    temp=temp->get_next();
                }
                temp->set_next(new1);
            }
            temp1=temp1->get_next();
        }
        if(temp1==NULL)
        {
            temp1=r.head;
            while(temp1!=NULL)
            {
                new1=new member();
                new1->set_name(temp1->get_name());
                new1->set_prn(temp1->get_prn());
                if(head==NULL)
                {
                    head=new1;
                }
                else
                {
                    temp=head;
                    while(temp->get_next()!=NULL)
                    {
                        temp=temp->get_next();
                    }
                    temp->set_next(new1);
                }
                temp1=temp1->get_next();
            }
        }
    }
};

int main()
{
    int t;
    char p[20],n[20],q[20],r[20];
    club s1,s2,s3;
    int flag=0,flag1=0,flag2=0,flag3=0;
    while(1)
    {
        cout<<"\n enter \n 1. For entering member as president in first list \n 2. for entering member as secretary in first list \n 3. for entering member as normal in first list \n 4. for canceling membership from first list\n 5. for calculating total number of members in first list  \n 6. for display of list of members of first list\n 7. for reverse list of first list\n 8. for concatenate list\n 9. For entering member as president in second list\n 10.  For entering member as secretary in second list\n 11.  for entering member as normal in second list \n 12. EXIT\n";
        cin>>t;
        switch(t)
        {
        case 1:
            cout<<"\n enter the perm reg no. of member \n";
            cin>>p;
            cout<<"\n enter the name of member \n";
	        cin>>n;
            s1.add_president(flag,p,n);
            flag++;
            break;
        case 2:
            cout<<"\n enter the perm reg no. of member \n";
            cin>>p;
            cout<<"\n enter the name of member \n";
	        cin>>n;
            s1.add_secretary(flag1,p,n);
            flag1++;
            break;
        case 3:
            cout<<"\n enter the perm reg no. of member \n";
            cin>>p;
            cout<<"\n enter the name of member \n";
	        cin>>n;
            s1.add_normal_member(flag,flag1,p,n);
            break;
        case 4:
	        s1.delete_member();
            break;
        case 5:
            s1.calculating_member();
            break;
        case 6:
            s1.display_list();
            break;
        case 7:
            s1.reverse_call();
            break;
        case 12:
            exit(0);
        case 8:
            s3.concatente(s1,s2);
            s3.display_list();
            break;
        case 9:
            cout<<"\n enter the perm reg no. of member \n";
            cin>>q;
            cout<<"\n enter the name of member \n";
	        cin>>r;
            s2.add_president(flag2,q,r);
            flag2++;
            break;
        case 10:
            cout<<"\n enter the perm reg no. of member \n";
            cin>>q;
            cout<<"\n enter the name of member \n";
	        cin>>r;
            s2.add_secretary(flag3,q,r);
            flag3++;
            break;
        case 11:
            cout<<"\n enter the perm reg no. of member \n";
            cin>>q;
            cout<<"\n enter the name of member \n";
	        cin>>r;
            s2.add_normal_member(flag2,flag3,q,r);
            break;
        }
    }
    return 0;
}
