//quotient and reminder

#include<stdio.h>
int main()

{
    int d1,d2,q,r;

    printf("Enter the dividend Number: ");
    scanf("%d",&d1);
    printf("Enter the division Number: ");
    scanf("%d",&d2);

    q=d1/d2;
    r=d1%d2;

    printf("Quotient Number is:%d\n",q);
    printf("Reminder Number is:%d",r);

    return 0;
}
