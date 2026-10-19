//Q. accept the 2 number from user and print the first number in times of second number  

#include<stdio.h>
#include<stdlib.h>

void display(int iNo1 , int iFrequency)
{
   int iCnt =0 ; 

   for (iCnt=1 ; iCnt<=iFrequency; iCnt++)
   {
      printf("%d\t ",iNo1);
   }



}


int main()
{

int iValue1 = 0 ;
int iValue2 = 0 ;

printf("enter first number :");
scanf("%d",&iValue1);

printf("enter second number :");
scanf("%d",&iValue2);

display(iValue1, iValue2);

    return 0 ;

}