#include<iostream.h>
#include<conio.h>
class B;
class A
{
private:
int a;

public:
void initial()
{
cout<<"Enter the value of first integer"<<endl;
cin>>a;
}
void friend greatest(A ,B);
};
class B
{
private:
int b;
public:
void initial()
{
cout<<"Enter the value of second integer"<<endl;
cin>>b;
}
void friend greatest(A ,B);
};
void greatest(A object1,B object2)
{
if(object1.a>object2.b)
{
cout<<"first integer is greater than the second";
}
else
{
cout<<"Second integer is greater than the first integer";
}
}
int main()
{
clrscr();
A ob1;
B ob2;
ob1.initial();
ob2.initial();
greatest(ob1,ob2);
getch();
return 0;
}
