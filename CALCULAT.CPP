#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float a,b,Result;   int ch;
cout<<"\tMenu:\n....................\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n";
cout<<"....................\n"; cout<<"Enter any 2 numbers of your choice\n";
cin>>a>>b;
cout<<"\nEnter your choice\n";
cin>>ch;
cout<<"\n";
if(ch==1.)
Result=a+b;
else if(ch==2.)
Result=a-b;
else if(ch==3.)
Result=a/b;
else if(ch==4.)
Result=a*b;
else cout<<"Yous have a wrong choice\n";
cout<<"\nThe result ="<<Result<<"\n";
getch();
}