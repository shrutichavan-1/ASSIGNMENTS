//Q.accept the number from user if the number is less than 10 print hello other wise print demo ; 

#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
   if (iNo<=10)
   {
    printf("HELLLO");
   }
   else
   {
    printf("demoo");
   }


}

int main()
{
   int iValue=0 ;

   printf("enter your number :");
   scanf("%d", &iValue);

   display(iValue);


    return EXIT_SUCCESS;

}