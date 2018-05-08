#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[50];
	cout<<"enter a string like 'computer' : ";
	cin>>a;
	int l=strlen(a);
	for(int i=0; i<l; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<a[j];
		}
		cout<<endl;
	}
	getch();
}
/*
C
CO
COM
COMP
COMPU
COMPUT
COMPUTE
COMPUTER
*/