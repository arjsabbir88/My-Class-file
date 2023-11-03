//largest two number among two number

#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("First Number is largest :(%d)",a);
    }
    else
       {
           printf("Second one is small :%d",b);
       }

    getch();

}

