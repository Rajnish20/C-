#include<iostream.h>
#include<conio.h>
int main()
{int a,b;
clrscr();
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"swapped nos are"<<endl<<a<<endl<<b;
getch();
return 0;
}