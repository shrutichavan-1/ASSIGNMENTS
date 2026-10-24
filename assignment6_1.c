//Q. Accept the number of electricity unit comsumed and calculate the total bill by using following configurartion
// first 100 unit --> 5rs/unit
//next 100 unit ---> 7rs/unit
//above 200 unit ---> 10rs/unit


#include<stdio.h>
#include<stdlib.h>

void electricityUnits(float fNo)
{
  float fBill = 0.0 ;
  
   
   if( fNo <= 100 )
   {
    fBill = fNo * 5 ;
    printf("Total Bill :%.0f",fBill );
   }

   else if ( fNo<=200)
   {
    fBill = 100 * 5 + (fNo - 100)*7  ;
    printf("Total Bill :%.0f", fBill);
   }

   else 
   {
    fBill=  100*5 + 100* 7 + (fNo-100) * 10 ;
    printf("Toatl Bill :%.0f", fBill);
   }
 

}




int main()
{ 
    float fUnits = 0.0 ;

    printf("Enter Your Units consumed :");
    scanf("%f",&fUnits);

    electricityUnits(fUnits);

}









