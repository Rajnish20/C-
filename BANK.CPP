#include<iostream.h>
#include<conio.h>
class bank
{
public:
char name[];
int acc_no;
float balance;
void initial()
{
cout<<"Enter the name"<<endl;
cin>>name;
cout<<"Enter the acc_no"<<endl;
cin>>acc_no;
cout<<"Enter the current balance"<<endl;
cin>>balance;
}
void deposit()
{
float amount;
cout<<"Enter the amount to be deposited"<<endl;
cin>>amount;
balance=balance+amount;
cout<<"Total balance "<<balance<<endl;
}
void withdrawal()
{
float withdraw;
cout<<"Enter the amount to be withdrawal"<<endl;
cin>>withdraw;
balance=balance-withdraw;
cout<<"Total Balance "<<balance<<endl;
}
};
bank b;
int main()
{
clrscr();
int choice;
do
{
cout<<"Menu"<<endl;
cout<<"1.To make account"<<endl;
cout<<"2.To deposit an amount"<<endl;
cout<<"3.To withdraw an amount"<<endl;
cout<<"4.To exit";
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
b.initial();
break;
case 2:
b.deposit();
break;
case 3:
b.withdrawal();
break;
case 4:
break;
default :
cout<<"Invalid Input";
}
}
while(choice !=4);
getch();
return 0;
	}
