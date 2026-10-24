//Q.Accept a year from user and check Wheteher the given YEar is LEap year or not 
// leap year is a year which is divisible by 400 , or by 4 but not by 100 , consider a year from 1 


#include<stdlib.h>
#include<stdio.h>

void checkLeapYear(int iNo)
{

    if (iNo>1)
    {
       if ((iNo%400)==0 || (iNo%4 )==0  &&  (iNo%100 )!= 0 )
      {
        printf(" the Entered year is a LEAP year ");
      }
      else 
      {
        printf("the entered year is not a leap year ");
      }
    }

    else 
    {
    printf(" the Entered Year is INVALID");
    }


}



int main()
{
  int iYear = 0 ;
  
  printf("Enter Your Year : \n ");
  scanf("%d",&iYear);

  checkLeapYear(iYear);

    return EXIT_SUCCESS;
}