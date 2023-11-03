//fahrenheit to celsius

#include<stdio.h>
int main ()

{
    float f,c;
    printf("Enter Fahrenhiet temp.:");
    scanf("%f",&f);
    c=(f-32)*5/9;

    printf("The value of celsius:%f",c);
    getch();

}
