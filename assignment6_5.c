//Q. Accept employes monthy salary and completed years of service from the user. calculate the bous using these rules:
//  years of service           bonus % of monthly salary
//    < 5 yrs                        5%
//    5- 10 yrs                      10%
//   10yrs <                        15%


#include<stdio.h>
#include<stdlib.h>

void calculateBonus(int iSry , int iyrs)
{
    int iBonus = 0 ;

    if(iyrs<5)
    {
        iBonus = (iSry*5)/100 ;
        printf("Your Bonus is :%d",iBonus);
    }

    else if (iyrs<10)
    {
        iBonus= (iSry*10)/100 ;
        printf("Your Bonus is : %d ", iBonus);

    }

    else 
    {
        iBonus= (iSry*15)/100;
        printf("your bonus is : %d ", iBonus);
    }

}




int main()
{
    int iSalary = 0 ;
    int iYears  = 0 ;

    printf("Enter Your Salary:");
    scanf("%d",&iSalary);

    printf("Enter Your Years of Service :");
    scanf("%d",&iYears);


   calculateBonus(iSalary, iYears);

    return EXIT_SUCCESS;
}