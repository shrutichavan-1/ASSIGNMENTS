// Q. to print the "Marvellous"  5 times on screen 


#include<stdio.h>
#include<stdlib.h>

void Display()
{
   int iCnt = 0 ;

   iCnt = 1; 
   for ( iCnt =1 ; iCnt <= 5 ; iCnt++ )
   {
      printf(" %d  . Marvellous\n ", iCnt ); 
   }

}




int main()
{
   Display();
    
    return EXIT_SUCCESS ;
}

