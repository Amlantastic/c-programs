#include<iostream.h>
#include<conio.h>
void main()
{clrscr(); int num,a=2,b=4,c=6,d=8,ch;
cout<<"\tMenu\n.............\n1.Div 2\n2.Div 4\n3.Div 6\n4.Div 8\nEnter your choice\n";
cin>>ch;
switch(ch)
{
  case 1:cout<<"Enter your no.\n";
	 cin>>num;
	 if(num % a!=0)
	 cout<<num<<" is not divisible by "<<a;
	 if(num % a==0)
	 cout<<num<<" is divisivble by "<<a;
	 break;

  case 2:cout<<"Enter your no.\n";
	 cin>>num;
	 if (num % b!=0)
	 cout<<num<<" is not divisible by "<<b;
	 if (num % b==0)
	 cout<<num<<" is divisible by "<<b;
	 break;

  case 3:cout<<"Enter your no.\n";
	 cin>>num;
	 if (num % c!=0)
	 cout<<num<<" is not divisible by "<<c;
	 if (num % c==0)
	 cout<<num<<" is divisible by "<<c;
	 break;

  case 4:cout<<"Enter your no.\n";
	 cin>>num;
	 if (num % d!=0)
	 cout<<num<<" is not divisible by "<<d;
	 if (num % d==0)
	 cout<<num<<" is divisible by "<<d;
	 break;
  }
  getch();
  }