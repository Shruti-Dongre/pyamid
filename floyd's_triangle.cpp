#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int row, k=1;
	cout<<"enter number of row : ";
	cin>>row;
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
	getch();
}
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/