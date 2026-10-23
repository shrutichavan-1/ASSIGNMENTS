// Q. accept character from useer and check whether the given character is vOlew 

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL ;

#define TRUE 1
#define FALSE 0 

BOOL checkVolew( char ch)
{
  if( ch =='A' || ch =='a' || ch =='E' || ch =='e' || ch=='I'|| ch=='i'|| ch=='o'||ch=='O'||ch=='U'||ch=='u')
  {
    return TRUE;
  }

  else
  {
   return FALSE  ;
  }

}

int main()
{
   char cChar = '\0';
   BOOL iRet  = FALSE ;

   printf("Enter your CHaracter :");
   scanf("%c",&cChar);

   iRet = checkVolew(cChar);

   if(iRet==TRUE)
   {
    printf("the given Character is Volew\n ");
   }

   else
   {
    printf("its nOt volew ");
   }


    return EXIT_SUCCESS;
}