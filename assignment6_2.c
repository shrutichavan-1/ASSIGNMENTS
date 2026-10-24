//  Q.Accept marks and age from user and check eligibity for Exam , allow only if marks are atleast 60 and age is 17 ,
//marks below 60 and abve 100 and age below 17 consider as INVALID 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool checkEligibity(float fNo , int iNo)
{
   if(fNo>=60 && iNo>=17 )
   {
    return 1 ;
   }  
   
   else 
   {
    return 0 ;
   }

}


int main()
{
   float fMarks = 0.0 ;
   int iAge = 0 ;
   bool bRet = false ;   

   printf("Enter your Marks :");
   scanf("%f",&fMarks);

   printf("Enter your age :");
   scanf("%d",&iAge);

   bRet= checkEligibity(fMarks, iAge);

   if(bRet==1)
   {
    printf("you are ELIGIBLE");
   }

   else
   {
    printf("you are NOT ELIGIBLE");
   }


    return EXIT_SUCCESS;
}