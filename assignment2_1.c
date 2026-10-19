//Q. Accept number from user and print the number of * on screen;


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
   int iCnt = 0 ;

   iCnt=1 ;
   while(iCnt<=iNo)
   {
     printf("%d\t*\n",iCnt);
     iCnt++;
   }



}



int main()
{
   int iValue = 0 ;

   printf("Enter your number : \n");
   scanf("%d", &iValue);

   Display(iValue);


    return EXIT_SUCCESS ; 
}