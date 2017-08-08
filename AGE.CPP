#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
int Young=13,Teenager=18,Midage=45,Old=60,ch,a;
cout<<"Enter your age:\n";
cin>>a;
 if (a<=Young)
 cout<<"You are Young\n";
 if (a>=Teenager & a<30)
 cout<<"You are a Teenager\n";
 if (a>=Midage & a<60)
 cout<<"You are of midage\n";
 if (a>=Old)
 cout<<"You are Old\n"<<endl;
 getch();
 }