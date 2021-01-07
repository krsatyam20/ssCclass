//single line comment
/*
  Multiple line comment
  line 1
  line 2

*/
//conditional stetment
/* conditional oprator
 > Greater Then
 < Less Then
 >= Greater then equal
 <= less then equal

 if
 if else
 nested if else
 */
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
  clrscr();
  int a=60;
  int b=70;
  int c=80;
  if(a>b)
   {
	//nested if
	if(a>c)
	{
	  cout<<"A is Greater then B and c"<<endl;
	  cout<<"My friend is a Sahanwaj";
	}
	else
	{
	cout<<"C is Greater";
	}
   }

   else
   {   if(b>c) {
		cout<<"B is Greater";
		}
	else
	{
	cout<<"C is Greater";
	}
   }

  getch();

 } //main close      d