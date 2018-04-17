#include<iostream.h>
#include<conio.h>
class B;
class A
{
private:
int a;
public:
int initial()
{
cout<<"Enter the first value a= ";
cin>>a;
return a;
}
friend void swap(A &,B &);
};
class B
{
private :
int b;
public:
int initial()
{
cout<<"Enter the second value b= ";
cin>>b;
return b;
}
void friend swap(A &, B &);
};
void swap(A & object1,B & object2)
{
int temp;
temp=object1.a;
object1.a=object2.b;
object2.b=temp;
cout<<"a= "<<object1.a<<endl;
cout<<"b= "<<object2.b<<endl;

}
int main()
{
clrscr();
A ob1;
B ob2;
ob1.initial();
ob2.initial();
swap(ob1,ob2);
getch();
return 0;
}