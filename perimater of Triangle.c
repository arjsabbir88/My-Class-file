//perimeter of a triangle

#include<stdio.h>
int main ()

{
    float AB,BC,CA,h,a,P;
    printf("Enter the value of AB:");
    scanf("%f",&AB);
    printf("Enter the value of BC:");
    scanf("%f",&BC);
    printf("Enter the value of CA:");
    scanf("%f",&CA);
    printf("Enter the hight of the triangle : ");
    scanf("%f",&h);

    a=(AB*h)/2;
    P=AB+BC+CA;
    
    printf("The areas value of the triangle : %f",a);
    printf("The value of perimeter:%f",P);
    return 0;
}
