#include<stdio.h>
#include<conio.h>
#include<windows.h>

void password();
void mainmenu();
char pwd[10]={"library4"};
COORD coord;

void gotoxy(int x,int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main()
{
	system("cls");
	password();
	getch();
}

void password()
{   
int counter;
gotoxy(13,2);
for(counter=0;counter<15;counter++)
{
	printf("\xB2");
}
printf(" LIBRARY MANAGEMENT SYSTEM ");
for(counter=0;counter<15;counter++)
{
	printf("\xB2");
}
	char d[20]=" password protected ";
	int j,k,i=0;
	char ch,pass[10];
	gotoxy(10,5);
	for(j=0;j<20;j++)
	{
		Sleep(50);
		printf("*");
	}
	for(j=0;j<20;j++)
	{
		Sleep(50);
		printf("%c",d[j]);
	}
	for( j=0;j<20;j++)
	{
		Sleep(50);
		printf("*");
		
	}
	/*for(j=0;j<20;j++)
	{
		Sleep(50);
		printf("*");
	} */
	gotoxy(10,7);
	printf("Enter Password :");
	while(ch!=13)
	{
		ch=getch();
		if(ch!=13 && ch!=8)
		{
			putch('*');
			pass[i]=ch;
			i++;
		}
	
	}
	pass[i]='\0';
		if(strcmp (pass,pwd)==0) 
		{   gotoxy(10,11);
			printf("password matched");
			gotoxy(10,13);
			printf("Press any key to continue...");
			getch();
			
		} 
		else
		{   gotoxy(10,11);
			printf("\a Warning password incorrect. Try again");
			getch();
			password();
		}
}	


