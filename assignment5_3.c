//Q. Accept the marks from the user in the range 0-100 and display the grade acc to given range of marks and marks outside 0-100 are invalid
// range         grade 
// below 40       FAIL
//40 - 60         C 
// 60 - 80        B 
// 80 - 100       A 

#include<stdio.h>
#include<stdlib.h>

void displayMarks(float fNo )
{
 if (fNo<0 || fNo>100)
 {
    printf("INVALID INPUT");
 }

 else if (fNo<=35)
 {
    printf("FAIL");
 }

 else if (fNo<=60)
 {
    printf("Grade C");
 }

 else if (fNo<=75)
 {
    printf("Grade B");
 }

 else 
 {
    printf("Grade A "); 
 }


}



int main()
{ 
    float fMarks = 0.0 ;
    
    printf("ENter Your Marks :");
    scanf("%f",&fMarks);

   displayMarks(fMarks);

    return EXIT_SUCCESS;
}