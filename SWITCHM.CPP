/*
Predefine selection/condition
we can use switch
switch(VariableName)
{
 case Value:
	stetment
  break;

}

*/

#include<iostream.h>
#include<conio.h>
void main (){
clrscr();
int day;
cout<<"Please enter Your day" ;
cin>>day;


switch(day)
{
      case 1:
	     cout<<"Good Morning Today is Monday";
       break;

      case 2:
	     cout<<"Good Morning Today is Tuesday";
       break;

       case 3:
	     cout<<"Good Morning Today is Wed";
       break;
       deafult:
	 cout<<"No any case";


}


getch();
}
