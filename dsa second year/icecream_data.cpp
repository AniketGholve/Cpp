#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
private:
    int roll_number;
    node *next;
public:
    void set_roll(int d)
    {
        roll_number=d;
    }
    int get_roll()
    {
        return roll_number;
    }
    void set_next(node *n)
    {
        next=n;
    }
    node* get_next()
    {
        return next;
    }
    node()
    {
      roll_number=0;
      next=NULL;
    }
};
class linklist
{
private:
    node *head;
public:
    linklist()
    {
        head=NULL;
    }
    void create(int d)
    {
        node *temp;
        node *new1;
        new1=new node();
	    temp=new node();
        new1->set_roll(d);
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
    void display()
    {
      node *temp;
      temp=head;
      while( temp!= NULL)
      {
	    cout<<temp->get_roll();
	    temp=temp->get_next();
	    cout<<"\t";
      }
    }
    void union_operation(linklist n1,linklist n2)
    {
      int counter=0;
      node *temp1, *temp2;
      temp1=n1.head;
      while( temp1!=NULL)
      {
        create(temp1->get_roll());
        temp1=temp1->get_next();
      }
      temp2=n2.head;
      while(temp2!=NULL)
      {
        temp1=n1.head;
        int flag=0;
        while(temp1!=NULL)
        {
           if(temp2->get_roll()==temp1->get_roll())
           {
              flag=1;
              break;
           }
           temp1=temp1->get_next();
        }
        if(flag==0)
        {
           create(temp2->get_roll());
        }
        temp2=temp2->get_next();
       }
    }
    void intersection_operation( linklist n1,linklist n2)
    {
      int counter=0;
      node *temp,*temp1,*temp2;
      temp=new node;
      temp1=new node;
      temp2=new node;
      temp = n1.head;
      while(temp!=NULL)
      {
          temp1=n2.head;
          while(temp1!=NULL)
          {
              if(temp->get_roll()==temp1->get_roll())
              {
                  create(temp1->get_roll());
              }
              temp1=temp1->get_next();
          }
          temp=temp->get_next();
      }
    }
    void diffrence(linklist n1,linklist n2)
    {
        int flag=0,counter=0;
        node *temp,*temp1,*temp2;
        temp=new node;
        temp1=new node;
        temp2=new node;
        temp=n1.head;
        while(temp!=NULL)
        {
            temp1=n2.head;
	        flag=0;
            while(temp1!=NULL)
            {
                if(temp->get_roll()==temp1->get_roll())
                {
                    flag=1;
                    break;
                }

                  temp1=temp1->get_next();
            }
            if(flag==0)
            {
                create(temp->get_roll());
            }
            temp=temp->get_next();
        }
    }
    void set_list_null()
    {
      head=NULL;
    }
    void complement( linklist n1)
    {
      node *temp;
      linklist U;
      int total,counter=0;
      temp=new node;
      cout<<"\n enter the total number of students\n";
      cin>>total;
      for(int i=1;i<total+1;i++)
      {
	    U.create(i);
      }
      diffrence(U,n1);
      temp=n1.head;
      while(temp!=NULL)
      {
	    counter++;
	    temp=temp->get_next();
      }
      cout<<"\n number of students who like neither vanilla nor butterscotch\n";
      cout<<(total-counter)<<"\n";
    }
};
int main()
{
  int n,d;
  linklist l1,l2,l3,l4;
  while(1)
  {
    cout<<"\n enter\n 1.students who like vanilla ice cream are \n 2. display list of students who like vanilla ice cream  \n 3.students who like butterscotch ice cream are  \n 4.display list of students who like butterscotch ice cream\n 5.students who like either vanilla or butterscotch or both\n 6. for students who like both vanilla and butterscotch \n 7. students who like only vanilla ice cream \n 8.students who like only butterscotch ice cream\n 9. number of students who like neither vanilla and butterscotch  \n 10. exit \n";
    cin>>n;
    switch(n)
    {
      case 1:
	    cout<<"\nenter the ROLL NUMBER\n";
        cin>>d;
	    l1.create(d);
	    break;
      case 2:
        l1.display();
	    break;
      case 10:
	    exit(0);
      case 3:
	    cout<<"\nenter the ROLL NUMBER\n";
        cin>>d;
        l2.create(d);
        break;
      case 4:
        l2.display();
        break;
      case 5:
	    l4.union_operation(l1,l2);
	    l4.display();
	    l4.set_list_null();
	    break;
      case 6:
	    l3.intersection_operation(l1,l2);
        l3.display();
	    l3.set_list_null();
	    break;
      case 7:
        l3.diffrence(l1,l2);
        l3.display();
	    l3.set_list_null();
        break;
      case 8:
	    l3.diffrence(l2,l1);
	    l3.display();
	    l3.set_list_null();
        break;
      case 9:
        l4.union_operation(l1,l2);
	    l3.complement(l4);
	    l3.display();
	    l3.set_list_null();
	    break;
    }
  }
  return 0 ;
}

