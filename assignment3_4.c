//Q. accept one character from user and convet case into another 

#include<stdio.h>
#include<stdlib.h>

void convertCase(char cChar)
{
  
  if (cChar>= 'a' && cChar<= 'z'  ) 
  {
    cChar= cChar-32 ;
    printf("Uppercase: %c ",cChar);
  }

  else if(cChar>= 'A' && cChar<= 'Z ')
  {
    cChar=cChar+32 ;
    printf("Lowercase: %c",cChar);
  }

  else 
  {
    printf("undefined character ") ;
  }

}

int main()
{
char cLtr = '\0';

printf("Enter your Character :");
scanf("%c",&cLtr);

convertCase(cLtr) ;

    return EXIT_SUCCESS;
}