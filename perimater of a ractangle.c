//perimeter of rectangle

#include<stdio.h>
int main ()

{
    float l,w,r,a;
    printf("Enter the value of length:");
    scanf("%f",&l);
    printf("Enter the value of width:");
    scanf("%f",&w);

    //area of a ractangla =l*w
    a=l*w;
    //perimeter of a rectangle=2*(l+w)
    r=2*(l+w);

    printf("The Areas value of the rectangle : ")
    printf("The values of perimeter of the rectangle :%f",r);

    getch();

}
