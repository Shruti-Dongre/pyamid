#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,s;
	cout<<"Enter a number (For eg 3) : ";
	cin>>n;
	int temp=1;
	cout<<"The pattern is : \n";
	for(int i=1; i<=n*2-1; i++)
	{
		if(i<n || i>n)
		{
			s=(n-1)*2;
			while(s!=0)
			{
				cout<<" ";
				s--;
			}
			cout<<n;
		}
		else if(i==n)
		{
			s=n*2-1;
			while(s!=0)
			{
				cout<<temp++<<" ";
				s--;
			}
		}
		cout<<endl;
	}
	getch();
}