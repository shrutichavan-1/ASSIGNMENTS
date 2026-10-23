//Q.accept number from user and print the number *  on screen

#include<stdio.h>
#include<stdlib.h>


void Display(int iNo )
{
    int iCnt = 0 ;

iCnt =0 ;

for (iCnt=1 ; iCnt<=5 ; iCnt++)
{
    printf("%d * \n" iCnt );
}
  

}

int main()
{
   int iValue = 5;

  
   Display(iValue);


    return EXIT_SUCCESS;
}