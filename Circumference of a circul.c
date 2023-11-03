//circumference of a circle

#include<stdio.h>
int main ()

{
    float c,r,a;
    printf("Enter radius of a circle: ");
    scanf("%f",&r);
    a=3.1416*(r*r);
    c=2*3.1416*r;
    printf("The Area of the circle : %f",a);
    printf("The Circumference:%f",c);
    return 0;
}
