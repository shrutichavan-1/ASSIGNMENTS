// accept the number from user and check wheather the number is odd or even 

#include<stdio.h>
#include<stdlib.h>

void check(int iNo)
{
   if((iNo%2)==0)
   {
     printf("the given number is EVEN\n");
   }

   else{
    printf(" the given number is ODD "); 
   }

}


int main()
{
  int iValue =0 ;

  printf("enter the number :");
  scanf("%d",&iValue);
 
  check(iValue);

    return 0 ;
}