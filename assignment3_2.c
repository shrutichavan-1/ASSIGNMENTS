//Q. accept number from user and print even factors of that number  

#include<stdio.h>
#include<stdlib.h>

void printEvenFactors(int iNo)
{
   int iCnt= 0;
if(iNo<=0)
{
    iNo=-iNo;
}
else
{
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      if(iNo%iCnt==0 && iCnt%2==1)
      {
        printf("%d \n",iCnt);
      }
   }
}
}


int main()
{
   int iValue = 0 ;

   printf("Enter Your Number :");
   scanf("%d",&iValue);

   printEvenFactors(iValue);

    return EXIT_SUCCESS;
}

// factor = iNO%2==0