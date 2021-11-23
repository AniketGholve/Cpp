#include<iostream>
#include<stdlib.h>
#define MAX 10
using namespace std;
class queue
{
private:
    class pizza
    {
    private:
        char siz[5],type[5],beverages, toppings;
        float bill=0;
        int counter=0;
    public:
        int order_id;
        void get_pizza(char s, char t,int i)
        {
            siz[i]=s;
            type[i]=t;
        }
        void add_order(int i)
        {
            int n;
            char ans='n';
            i=i+1;
            cout<<"\n ENTER \n 1. for veg pizza in regular size \n 2. for veg pizza in medium size \n 3. for veg pizza in large size \n 4. for non-veg pizza in regular size \n 5. for non-veg pizza in medium size \n 6.  for non-veg pizza in large size \n";
            cin>>n;
            switch(n)
            {
            case 1:
               get_pizza('r','v',i);
               break;
            case 2:
               get_pizza('m','v',i);
               break;
            case 3:
               get_pizza('l','v',i);
               break;
            case 4:
               get_pizza('r','n',i);
               break;
            case 5:
               get_pizza('m','n',i);
               break;
            case 6:
               get_pizza('l','n',i);
               break;
            }
            cout<<"\n do you want to order something else(y/n)\n";
            cin>>ans;
            if(ans=='y')
            {
                counter++;
                if(counter<4)
                {
                    add_order(i);
                    return;
                }
                else
                {
                    cout<<"\n sorry you can order only 5 pizza at a time\n";
                    return;
                }
            }
            else
            {
                return;
            }
        }
        void give_order(int order_number)
        {
            order_id=order_number;
            add_order(-1);
            cout<<"\n Do you want any toppings on pizza(y/n)\n";
            cin>>toppings;
            cout<<"\n Do you want beverages with order(y/n) \n";
            cin>>beverages;
            return;
        }
        float compute_bill()
        {
            for(int k=0;k<counter+1;k++)
            {
                if(siz[k]=='r'&&type[k]=='v')
                {
                    bill=bill+100;
                }
                else if(siz[k]=='m'&&type[k]=='v')
                {
                    bill=bill+140;
                }
                else if(siz[k]=='l'&&type[k]=='v')
                {
                    bill=bill+180;
                }
                else if(siz[k]=='r'&&type[k]=='n')
                {
                    bill=bill+120;
                }
                else if(siz[k]=='m'&&type[k]=='n')
                {
                    bill=bill+160;
                }
                else if(siz[k]=='l'&&type[k]=='n')
                {
                    bill=bill+200;
                }
            }
            if(toppings=='y')
            {
                bill=bill+40;
            }
            if(beverages=='y')
            {
                bill=bill+60;
            }
            return bill;
        }
    };
    pizza p[MAX];
    int front,rear,order_number=0;
public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    int enqueue(pizza a)
    {
        if(Isfull()==1)
        {
            cout<<"\n sorry! order can not be processed \n";
            return -1;
        }
        else
        {
            if(front==-1)
            {
                front++;
            }
            rear=(rear+1)%MAX;
            p[rear]=a;
        }
    }
    int Isfull()
    {
        if(front==0&&rear==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int Isempty()
    {
        if(front==-1&&rear==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    pizza dequeue()
    {
        pizza a;
        if(Isempty()==1)
        {
            cout<<"\n No more orders left\n";
	        a.order_id=-1;
            return a;
        }
        else
        {
            a=p[front];
            if(front==rear)
            {
                front=rear=-1;
            }
            else
            {
                front=(front+1)%MAX;
            }
            return a;
        }
    }
    void order_pizza()
    {
      int a;
        order_number++;
        pizza p;
	    if(Isfull()==0)
	    {
		   p.give_order(order_number);
           a=enqueue(p);
	       if(a!=-1)
	       {
              cout<<"\n Your order has been placed \n";
              cout<<"\n Your order ID is :-";
              cout<<"\t"<<order_number;
              cout<<"\n Your bill is :-";
              cout<<"\t Rs "<<p.compute_bill();
	       }  
	    }
	    else
	    {
	       cout<<"\n sorry! order can not be processed \n";
	    }
    }
    void process_order()
    {
        pizza p;
        p=dequeue();
	    if(p.order_id!=-1)
	    {
           cout<<"\norder id :-"<<"\t";
           cout<<p.order_id<<" is processed\n";
	    }
    }
};
int main()
{
    int k;
    queue q;
    cout<<"\n            WELCOME TO GOYAL'S PIZZA PARLOR             \n";
    cout<<"\n   Our Menu is  \n";
    cout<<"\n       Pizzas       \t"<<"             Rate       \n ";
    cout<<"veg pizza in regular size\t"<<"     Rs 100          \n ";
    cout<<"Non-veg pizza in regular size\t"<<"     Rs 120          \n ";
    cout<<"veg pizza in medium size\t"<<"     Rs 140          \n ";
    cout<<"Non-veg pizza in medium size\t"<<"     Rs 160          \n ";
    cout<<"veg pizza in large size\t"<<"     Rs 180          \n ";
    cout<<"Non-veg pizza in large size\t"<<"     Rs 200          \n ";
    cout<<"    toppings         \t"<<"             Rs 40         \n ";
    cout<<"    beverages        \t"<<"             Rs 60         \n ";
    while(1)
    {
        cout<<"\n ENTER \n 1. for ordering pizza \n 2. for processing order \n 3. exit\n";
        cin>>k;
        switch(k)
        {
        case 1:
            q.order_pizza();
            break;
        case 2:
            q.process_order();
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}
