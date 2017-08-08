#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
float sub1,sub2,sub3,per,sum;
cout<<"Enter the marks of 3 subjects\n";
cin>>sub1>>sub2>>sub3;
sum=sub1+sub2+sub3;
per=(sum/3);
cout<<"The percentage = "<<per;
getch();
}