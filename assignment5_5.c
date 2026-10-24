//Q. Accept a single character from user and check wheather it is uppercase or lowercase 0r special character or digit ;

#include<stdio.h>
#include<stdlib.h>

void checkCharacter(char cChar)
{
  int iNo = 0 ;
     
  if( cChar>='a' && cChar<='z')
  {
    printf("it is LowerCase Character");
  }

  else if (cChar>='A' && cChar<='Z')
  {
    printf("it is UpperCase Character");
  }

  else if ( cChar<='9' && cChar>='0')
  {
    printf("it is a Digit ");
  }

  else 
  {
    printf(" it is a Special Character");
  }


}


int main()
{
   char ch = '\0';

   printf("Enter Your Character :");
   scanf("%c",&ch);

   checkCharacter(ch);


    return EXIT_SUCCESS;
}