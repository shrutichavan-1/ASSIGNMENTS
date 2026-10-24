//Q.Accept 3 numbers from user and check which number is greater amongest them ...make sure program runs effortlessly when all three arre equal 

#include<stdlib.h>
#include<stdio.h>

 void checkGreaterNumber( int iNo1 , int iNo2  , int iNo3)
 {
   if (iNo1>iNo2 && iNo1>iNo3 )
   {
    printf("the grater number is : %d ", iNo1);
   }

   else if (iNo2>iNo1  && iNo2> iNo3)
   {
    printf("the greater number is : %d ",iNo2);
   }

   else if (iNo3>iNo2 && iNo3>iNo1)
   {
    printf("the greater number is : %d ", iNo3);
   }

   else 
   {
    printf("All three numbers are EQUAL ");
   }


 }


int main()
{
  int iValue1 =0 ;
  int iValue2 =0 ;
  int iValue3 =0 ;

  printf("Enter your 1st number :");
  scanf("%d",&iValue1);

   printf("Enter your 2nd number :");
  scanf("%d",&iValue2);

   printf("Enter your 3rd number :");
  scanf("%d",&iValue3);

  checkGreaterNumber(iValue1,iValue2, iValue3);
 


    return EXIT_SUCCESS; 
}