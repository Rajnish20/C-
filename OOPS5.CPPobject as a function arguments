#include<iostream.h>
#include<conio.h>
class Complex
{
public:
int real;
int imag;
Complex()
{ real=0;
  imag=0;
  }
void getdata()
{
cout<<"Enter the real part of number"<<endl;
cin>>real;
cout<<"Enter the imaginary part of number"<<endl;
cin>>imag;
}
void add(Complex comp1,Complex comp2)
{
real=comp1.real+comp2.real;
imag=comp1.imag+comp2.imag;
}
void display()
{
cout<<"sum is = "<<real<<" + "<<imag<<"i";
}
};
int main()
{
clrscr();
Complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3.add(c1,c2);
c3.display();
getch();
return 0;
}
