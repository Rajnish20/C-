#include<iostream.h>
#include<conio.h>
class Student
{
public:
char name[];
int roll_no;
float marks[5];

void initial();
void display();
};
Student S;
void Student :: initial()

{
int sum=0;
cout <<"Enter the name of Student"<<endl;
cin >> S.name;
cout<<"Enter the roll_no"<<endl;
cin >> S.roll_no;
cout<<"Enter the marks of subjects"<<endl;
cin>>S.marks[0];
cin>>S.marks[1];
cin>>S.marks[2];
cin>>S.marks[3];
cin>>S.marks[4];
sum= S.marks[0]+S.marks[1]+S.marks[2]+S.marks[3]+S.marks[4];
float percentage=sum/5;
cout<<"Your Percentage is "<<percentage<<"%" <<endl;
}
void Student :: display()
{
float percentage;
if(percentage >= 95)
{cout << "Grade A Outstanding"<<endl;
}
else
{
if(percentage >=90 && percentage <=94)
{
cout <<"Grade B Excellent"<<endl;
}
else
{
if(percentage >= 85 && percentage <=89)
{ cout << "Grade C Good"<<endl;
}
else
{
if(percentage >=80 && percentage <=84)
{
cout <<"Garde D Well Try"<<endl;
}
else
{
if(percentage >=75 && percentage <=79)
{
cout <<"Grade E Work Hard"<<endl;
}
else
{
cout <<"Fail";
}
}
}
}
}
    }
int main()
{
clrscr();
S.initial();
S.display();
getch();
return 0;
}