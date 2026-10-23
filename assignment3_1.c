//Q. accept one number from user and print that number of even number on screen 
// i: 5 
// o: 2 4 6 8 10  

#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{ 
    int iCnt=0;

if (iNo<=0)
{
    printf("undefined number ");
}

else
{
    for(iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        printf("%d \n ",iCnt*2);
        
    }
  
}

}


int main()
{
   int iValue =0 ;

   printf("enter your number :");
   scanf("%d",&iValue);

   display(iValue);

    return EXIT_SUCCESS;

}