// Q. Accept the total purchase amount and give the final amount after applying following discounts
// purchase        discount

// below 1000/-        0 %
// 1000 - 5000/-      10 %
//5000 - 10000/-      20 %

#include<stdio.h>
#include<stdlib.h>

void checkDiscount(int iNo)
{
    int iSum = 0 ;

   if(iNo<=1000)
   {
     iSum = iNo - 0 ;
     printf("total bill is :%d ", iSum);
   }

   else if (iNo<=5000)
   {
      iSum = iNo - iNo/10 ;
      printf("total Bill is : %d", iSum);
   }

   else 
   {
    iSum= iNo - (iNo/10)*2 ;
    printf("total bill is : %d ", iSum);
   }

}


int main()
{
   int iPurchase = 0 ;

   printf("Enter Your Purchase amt :");
   scanf("%d",&iPurchase);

checkDiscount(iPurchase);

    return EXIT_SUCCESS;
}