#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
 char pin[4]="1234",u[4],uname[4],name[4]="aadi";

 gotoxy(33,11);
 cout<<"enter name : ";
 cin>>uname;
 gotoxy(33,12);
 cout<<"enter pin : ";
 for(int i=0;i<=3;i++)
 {
  u[i]=getch();
  cout<<"*";
 }
 for(i=0;i<=3;i++)
 {
  if (u[i]!=pin[i]||name[i]!=uname[i])
  {
   break;
  }
 }
 gotoxy(32,20);
 if (i==4)
 {
  cout<<"name and pin matched";
 }
 else
 cout<<"name and pin not matched";
 getch();
}