#include <iostream.h>
#include<conio.h>
void main()
{ clrscr();1
int day,year=365,month=12,d,ch,n,f;
cout<<"Menu:.............. /n1.Days/n2.Years/n3.Months/nEnter the data/n";
cin>>ch;
switch(ch)
{
    case 1:cout<<"Enter the data\n";
    cin>>d;
    d=day;
    cout<<"The no. of days ="<<d;
    
    case 2:cout<<"Enter the data\n";
    cin>>d>>n;
    d=year-n;
    cout<<"The no. of days ="<<d;
    
    case 3:cout<<"Enter the data\n";
    cin>>d>>n;
    d=month-n;
    f=d*30;
    cout<<"The no. of days ="<<d;
    
}
getch();
}