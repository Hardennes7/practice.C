#include <stdio.h>

int main()
{
int  a=20;

if (a>=70)
{
printf("Grade:A\n");

}
else if (a>=60)
{
printf("Grade:B\n");
}
 else if ("a>=50")
 {


printf("Grade:C\n");
}
 else if ("a>=40")
 
{
printf("Grade:D\n");
}
 else if ("a<=40")
{
printf("Grade:E\n");
}

return 0;
}



// switch case 

#include <stdio.h>
int main ()
{
 
 char grade = 'F';
 switch(grade)
 {
 case 'A' :
 printf("Excellent!\n" );
 break;
 case 'B' :
 case 'C' :
 printf("Well done\n" );
 break;
 case 'D' :
 printf("You passed\n" );
 break;
 case 'F' :
 printf("PULL UP YOUR SOCKS  \n" );
 break;
 default :
 printf("Invalid grade\n" );
 }
 printf("Your grade is %c\n"); 
 
 return 0;
 }
