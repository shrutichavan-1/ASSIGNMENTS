//Q.accept number from user and print even factors of that number without its own factor 

#include<stdio.h>
#include<stdlib.h>

void displayFactor(int iNo)
{

      int iCnt = 0 ;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    else
  
    {
         for (iCnt=1 ; iCnt<=iNo/2; iCnt++)
         {
             if(iNo%iCnt==0 && iCnt%2==0)
              {
                printf("%d\n",iCnt);
              }
         }
    }


}



int main()
{
   int iValue=0 ;

   printf("Enter your number :");
   scanf("%d",&iValue);

  displayFactor(iValue);


    return EXIT_SUCCESS;
}