#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
float P,T,R,SI;
cout<<"Enter the Peroid,Rate,Time:\n";
cin>>P>>T>>R;
SI=(P*T*R)/100;
cout<<"The Simple Interest of your data = "<<SI;
getch();
}