#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int row;
	cout<<"enter number of row : ";
	cin>>row;
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	getch();
}
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/