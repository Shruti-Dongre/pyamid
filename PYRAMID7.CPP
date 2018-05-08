#include<iostream.h>
#include<conio.h>
void main()
{
	int n=1, a=0;
	clrscr();
	for(int i=1; i<=4; i++)
	{
		for(int j=1 ; j<=4; j++)
		{
			if(n<=9)
			{
				cout<<n;
				n++;
			}
			else
			{
				cout<<a;
				a++;
			}
		}
		cout<<endl;
	}
	getch();
}
/*
1234
5678
9012
3456
*/