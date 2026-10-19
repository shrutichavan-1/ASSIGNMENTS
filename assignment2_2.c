//Q. accept number from user and print * on screen in desending order 


#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
   int iCnt =0 ;
 
     
   while (iNo>=1)
   {
     printf("%d *", iCnt);
     iCnt--;

   }
 
}



int main()
{

int iValue=0 ;

printf("Enter your number :");
scanf("%d",&iValue);

Display(iValue);

    return EXIT_SUCCESS;
}