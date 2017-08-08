#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float r,b,h,d1,d2,a,b1,h1,ar;
char ch;
cout<<"Menu\n";
cout<<".........\n";
cout<<"1.Circle\n2.Triangle\n3.Rhombus\n4.Trapezium\n";
cout<<"Enter your choice:\n";
cin>>ch;
{ switch(ch)
case 1:cout<<"Enter the radius of your circle:\n";
       cin>>r;
       ar=3.14*r*r;
       cout<<"The area of your circle is:"<<ar;
       break
case 2:cout<<"Enter the base and height of your triangle:\n";
       cin>>b>>h;
       ar=(b*h)/2;
       cout<<"The area of your triangle is:"<<ar;
       break
case 3:cout<<"Enter the diagonals of your rhombus:\n";
       cin>>d1>>d2;
       ar=d1*d2;
       cout<<"The area of your Rhombus is:"<<ar;
       break
case 4:cout<<"Enter the parrallel sides and height of your trapezium:\n";
       cin>>a>>b1>>h1;
       ar=0.5*(a+b1)*h1;
       cout<<"The area of your Trapezium is:"<<ar;
       break
}
getch();

}