#include<iostream.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	for(int i=4; i>=1; i--)
	{
		a = 'A';
		for(int j=1 ; j<=i; j++)
		{
			cout<<a;
			a+=2;
		}
		cout<<endl;
	}
	getch();
}
/*
ACEG
ACE
AC
A
*/