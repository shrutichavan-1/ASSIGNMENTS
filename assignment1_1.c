//Q. program to divide 2 numbers 

#include<stdio.h>
#include<stdlib.h>


int divide(int iNo1 , int iNo2 )
{
   int iAns = 0;
   
   if (iNo2 == 0 )
   {
       printf("Error: Division by zero is not defined .\n");
   }


 iAns= iNo1/ iNo2 ; 

   return  iAns ;

}





int main()
{

     int iValue1 = 0 ;
     int iValue2 = 0 ;
  
     int iRet = 0 ;

printf("Enter first number :\n ");
scanf("%d", &iValue1);

printf("Enter Second number : \n ");
scanf("%d", &iValue2);

iRet= divide(iValue1, iValue2);

printf("the divison of given 2 numbers is :%d \n", iRet);



    return EXIT_SUCCESS;

}



// check the denominator for zero ( ino2 == 0 )----> undefined 
// a numerator begin zero is fine 

