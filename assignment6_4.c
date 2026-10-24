// Q.Accept three integer values representing the length of sides of the triagle .
//determine whether they can form a valid triangle ...
// valid tringle ----> postive lenths  and sum of any two side of triangle must be greater than the third side 

#include<stdio.h>
#include<stdlib.h>

void checkTriangle(int a , int b , int c)
{
  if (a<=0 || b<= 0 ||  c <= 0 )
  {
    printf("input invalid ..NO TRIANGLE");
    return ;
  }

  if(( a  + b > c)  && (b + c > a) && ( c + a > b))
  {
    printf("Valid Triangle  ");
  }

  else
  {
    printf("the number do not form a valid triangle ");
  }


}

int main()
{
  int iValue1 = 0 ;
  int iValue2 = 0 ;
  int iValue3 = 0 ;

  printf("Enter 1st side length :");
  scanf("%d",&iValue1);

  
printf("Enter 2nd side length :");
  scanf("%d",&iValue2);

  printf("Enter 3rd side length :");
  scanf("%d",&iValue3);

  checkTriangle(iValue1, iValue2 , iValue3);


    return 0 ;
}