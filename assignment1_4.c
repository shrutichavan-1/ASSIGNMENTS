//Q.4 Accept one number and check whther it is divible by 5 or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Display(int iNo )
{
  

    if((iNo%5)==0)
    {
       return true ;
    }

    else 
    {
        return false ;
    }


}



int main()
{
    int iValue = 0 ;
    bool bRet = 0 ; 

    printf("enter you number : \n");
    scanf("%d",&iValue);

    bRet = Display(iValue);

    if ( bRet==true )
   { 
    printf("the given number is divisible by 5  ");
   }

   else 
   printf(" not divisible by 5 "); 

    return EXIT_SUCCESS ; 
}