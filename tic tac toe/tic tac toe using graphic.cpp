#include<iostream>
#include<stdlib.h>
#include<graphics.h>
using namespace std;
char player='x';
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
void draw()
{
	for(int i=0;i<3;i++)
	{
		cout<<"              ";
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl; 
	}
}
void input()
{
	int a;
	cout<<"\n enter the number from the field : ";
	cin>>a;
	if(a==1)
	{
		if(matrix[0][0]=='x'||matrix[0][0]=='o')
		{
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else	
			matrix[0][0]=player;
		
	}
	else if(a==2)
	{
		if(matrix[0][1]=='x'||matrix[0][1]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[0][1]=player;
	}
	else if(a==3)
	{
		if(matrix[0][2]=='x'||matrix[0][2]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[0][2]=player;
	}
	else if(a==4)
	{
		if(matrix[1][0]=='x'||matrix[1][0]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[1][0]=player;
	}
	else if(a==5)
	{
		if(matrix[1][1]=='x'||matrix[1][1]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[1][1]=player;
	}
	else if(a==6)
	{
		if(matrix[1][2]=='x'||matrix[1][2]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[1][2]=player;
	}
	else if(a==7)
	{
		if(matrix[2][0]=='x'||matrix[2][0]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[2][0]=player;
	}
	else if(a==8)
	{
		if(matrix[2][1]=='x'||matrix[2][1]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[2][1]=player;
	}
	else if(a==9)
	{
		if(matrix[2][2]=='x'||matrix[2][2]=='o')
		{	
			system("CLS");
			cout<<"wrong entry entre again \n";
			draw();
			input();
		}
		else
		matrix[2][2]=player;
	}
	else 
	{
		system("CLS");
		cout<<"wrong entry entre again \n";
		draw();
		input();
	}
}
void toggleplayer()
{
	if(player=='x')
	{
		player='o';
	}
	else
	player='x';
}
int win()
{
	if(matrix[0][0]=='x'&&matrix[0][1]=='x'&&matrix[0][2]=='x')
	{
		return 1;
	}
	if(matrix[1][0]=='x'&&matrix[1][1]=='x'&&matrix[1][2]=='x')
	{
		return 1;
	}
	if(matrix[2][0]=='x'&&matrix[2][1]=='x'&&matrix[2][2]=='x')
	{
		return 1;
	}
	
	if(matrix[0][0]=='x'&&matrix[1][0]=='x'&&matrix[2][0]=='x')
	{
		return 1;
	}
	if(matrix[0][1]=='x'&&matrix[1][1]=='x'&&matrix[2][1]=='x')
	{
		return 1;
	}
	if(matrix[0][2]=='x'&&matrix[1][2]=='x'&&matrix[2][2]=='x')
	{
		return 1;
	}
	
	if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
	{
		return 1;
	}
	if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
	{
		return 1;
	}
	
	
	if(matrix[0][0]=='o'&&matrix[0][1]=='o'&&matrix[0][2]=='o')
	{
		return 0;
	}
	if(matrix[1][0]=='o'&&matrix[1][1]=='o'&&matrix[1][2]=='o')
	{
		return 0;
	}
	if(matrix[2][0]=='o'&&matrix[2][1]=='o'&&matrix[2][2]=='o')
	{
		return 0;
	}
	
	if(matrix[0][0]=='o'&&matrix[1][0]=='o'&&matrix[2][0]=='o')
	{
		return 0;
	}
	if(matrix[0][1]=='o'&&matrix[1][1]=='o'&&matrix[2][1]=='o')
	{
		return 0;
	}
	if(matrix[0][2]=='o'&&matrix[1][2]=='o'&&matrix[2][2]=='o')
	{
		return 0;
	}
	
	if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')
	{
		return 0;
	}
	if(matrix[0][2]=='o'&&matrix[1][1]=='o'&& matrix[2][0]=='o')
	{
		return 0;
	}	
	else
	{
		return 2;
	}
}
int main()
{
	int z,i;
	i=1;
	initwindow(640,360);
	while(i<10)
	{
		system("CLS");
		setcolor(RED);
		line(40,0,40,100);
		draw();
		input();
		toggleplayer();
		z=win();
		if(z==1)
		{
			cout<<"\nX is winner\n";
			break;
		}
		if(z==0)
		{
			cout<<"\n O is winner\n";
			break;
		}
		i++;
	}
	if(z==2)
	{
		cout<<"\n opp's !!!! match tye\n";
	}
}
