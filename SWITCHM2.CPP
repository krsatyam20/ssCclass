#include<iostream.h>
#include<conio.h>
void main (){
clrscr();
int ch,a,b,c;
cout<<"Please enter Your choice 1 for add, 2 for sub and 3 for Multiplication" ;
cin>>ch;


switch(ch)
{
      case 1:
	     cout<<"Hi You slect add option";
	     cout<<"Please enter the value of a";
	     cin>>a;
	     cout<<"Please enter the value of b";
	     cin>>b;
	     c=a+b;
	     cout<<"The add Value of"<<a <<"and" <<b <<"=" <<c;
       break;

      case 2:

	     cout<<"Hi You slect Subtraction option";
	     cout<<"Please enter the value of a";
	     cin>>a;
	     cout<<"Please enter the value of b";
	     cin>>b;
	     c=a-b;
	     cout<<"The sub Value of"<<a <<"and" <<b <<"=" <<c;
       break;

       case 3:
	     cout<<"Hi You slect Multiplication option";
	     cout<<"Please enter the value of a";
	     cin>>a;
	     cout<<"Please enter the value of b";
	     cin>>b;
	     c=a*b;
	     cout<<"The Multiplication Value of"<<a <<"and" <<b <<"=" <<c;

       break;
       deafult:
	 cout<<"No any case";


}


getch();
}
