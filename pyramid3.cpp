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
			cout<<j<<" ";
		}
		cout<<endl;
	}
	getch();
}
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/