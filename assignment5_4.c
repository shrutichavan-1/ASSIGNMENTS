//Q.Accept number from user and check divisiblity of both 3 and 5 , by only 3 , by only 5 or neither .

#include<stdio.h>
#include<stdlib.h>

void checkDivisiblity( int iNo)
{
    if((iNo%3)==0 && (iNo%5)== 0)
    {
        printf("The given Number is Divisible by both 3 and 5 ");
    } 

    else if ((iNo%3)==0 && (iNo%5)!=0)
    {
        printf("The given number is divisible only by 3 ");
    }

    else if ((iNo%5)==0  && (iNo%3)!=0)
    {
        printf("the given number is divisible only by 5 ");
    }

    else 
    {
        printf("the given number is NOT divisible by Neither 3 nor 5");
    }
 
}


int main()
{
  int iValue =0 ;

  printf("Enter your Number : ");
  scanf("%d", &iValue);

  checkDivisiblity(iValue);


    return EXIT_SUCCESS;
}