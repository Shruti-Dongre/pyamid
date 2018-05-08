#include<iostream.h>
#include<conio.h>
void main()
{
	int rows;
	clrscr();
	cout<<"Enter number of rows : ";
	cin>>rows;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1 ; j<=2*(i-1) ; j++)
			cout<<" ";
		for(int k=i ; k<=(10-i) ; k++)//use for specific
			cout<<k;
		//for(int k=i ; k<=(rows-i) ; k++)//use for in general
			//cout<<k;
		cout<<endl;
	}
	getch();
}
/*
123456789
  2345678
    34567
	  456
	    5
*/