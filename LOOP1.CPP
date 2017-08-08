#include<iostream.h>
#include<conio.h>
void main() {clrscr();
int i,num1,num2;
cout<<"Enter the limits for your desired output\n";
cin>>num1>>num2;
for(i=num1;i<=num2;i=i+1)
{if(i%2==0)
cout<<i<<endl;

if(i%2!=0)
cout<<i;
}
getch();
}
