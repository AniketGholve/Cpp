#include<iostream>
#include<stdlib.h>
#include<string.h>
#define MAX 20
using namespace std;
class stak
{
private:
    int top,length,length_of_postfix;
    char infix[20],postfix[20];
    struct stk
    {
        char c[MAX];
        int  i[MAX];
    }s;
public:
    stak()
    {
        top=-1;
    }
    int Isfull()
    {
        if(top==MAX-1)
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
        if(top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void push(char a)
    {
        if(Isfull()==1)
        {
            cout<<"\n error : stack is full \n";
        }
        else
        {
            s.c[++top]=a;
        }
    }
    void pushint(int a)
    {
        if(Isfull()==1)
        {
            cout<<"\n error : stack is full \n";
        }
        else
        {
            s.i[++top]=a;
        }
    }
    char pop()
    {
        if(Isempty()==1)
        {
            cout<<"\n error : stack is empty \n";
        }
        else
        {
            return s.c[top--];
        }
    }
    int popint()
    {
        if(Isempty()==1)
        {
            cout<<"\n error : stack is empty \n";
        }
        else
        {
            return s.i[top--];
        }
    }
    int check_priority(char k)
    {
        if(k=='*'||k=='/')
        {
            return 2;
        }
        else if(k=='+'||k=='-')
        {
            return 1;
        }
        else if(k=='(')
        {
            return 0;
        }
    }
    void infix_to_postfix()
    {
        cout<<"\n Enter the infix expression you want to convert in postfix \n";
        cin>>infix;
        length=strlen(infix);
        int k=0;
        for(int i=0;i<length;i++)
        {
            if(infix[i]==')')
            {
                while( s.c[top]!='(')
                {
                    postfix[k]=pop();
                    k++;
                }
                if(s.c[top]=='(')
                {
                    pop();
                }
            }
            else if(infix[i]=='(')
            {
                push(infix[i]);
            }
            else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/')
            {
                while(check_priority(infix[i])<=check_priority(s.c[top])&&Isempty()!=1)
                {
                    postfix[k]=pop();
                    k++;
                }
                if(Isempty()==1||check_priority(infix[i])>check_priority(s.c[top]))
                {
                    push(infix[i]);
                }
            }
            else if(infix[i]>=65&&infix[i]<91)
            {
                postfix[k]=infix[i];
                k++;
            }
            else if(infix[i]>=48&&infix[i]<58)
            {
               postfix[k]=infix[i];
               k++;
            }
            else
            {
                cout<<"\n invalid operation\n";
                break;
            }
        }
        while(top!=-1)
        {
            if(s.c[top]=='(')
            {
                pop();
            }
            else
            {
                postfix[k]=s.c[top--];
                k++;
            }
        }
        length_of_postfix=k;
        cout<<postfix;
    }
    int evaluation()
    {
        char op;
        int i;
        int opnd1,opnd2,result;
        i=0;
        while(i!=length_of_postfix)
        {
            if(postfix[i]>=48&&postfix[i]<58)
            {
                pushint(postfix[i]-48);
		        i++;
            }
            else if(postfix[i]=='+'||postfix[i]=='*'||postfix[i]=='-'||postfix[i]=='/')
            {
                op=postfix[i];
                opnd1=popint();
                opnd2=popint();
                if(op== '+')
                {
                    result=opnd1+opnd2;
                    pushint(result);
		            i++;
		        }
                else if(op== '*')
		        {
                    result=opnd1*opnd2;
                    pushint(result);
                    i++;
                }
                else if(op== '-')
		        {
                    result=opnd2-opnd1;
                    pushint(result);
		            i++;
		        }
                else if(op=='/')
		        {
                    result=opnd2/opnd1;
                    pushint(result);
		            i++;
                }
                else
		        {
		            cout<<"\n error\n";
		            break;
		        }
            }
        }
        if(i==length_of_postfix)
        {
            return popint();
        }
    }
    void assignvalue()
    {
        int counter=0;
        for(int i=0;i<length_of_postfix;i++)
        {
            if(postfix[i]>=65&&postfix[i]<91)
            {
                counter++;
            }
        }
        int j;
        int n[counter];
        cout<<"\n enter the values of all variables\n";
        for( j=0;j<counter;j++)
        {
            cin>>n[j];
            if(n[j]+48<48||n[j]+48>58)
            {
                cout<<"\n ENTER value between 0-9 only\n";
                break;
            }
        }
        if(j==counter)
        {
            int k=0;
            for(int i=0;i<length_of_postfix;i++)
            {
                if(postfix[i]>=65&&postfix[i]<91)
                {
                    postfix[i]=n[k]+48;
                    k++;
                }
           }
        }
    }
};
int main()
{
    int n;
    stak s;
    while(1)
    {
        cout<<"\nENTER \n 1. for converting a string from infix to postfix \n 2. for evaluation\n 3. for assigning value  \n 4. EXIT \n ";
        cin>>n;
        switch(n)
        {
        case 1:
           s.infix_to_postfix();
           break;
        case 2:
           cout<<s.evaluation();
           break;
        case 4:
            exit(0);
        case 3:
            s.assignvalue();
            break;
        }
    }
    return 0;
}
