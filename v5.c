#include <stdio.h>
int main()
{
    int a, b, c, d, e;

    printf("Enter the velue a = ");
    scanf("%d", &a);
    printf("Enter the velue b = ");
    scanf("%d", &b);
    printf("Enter the velue c = ");
    scanf("%d", &c);
    printf("Enter the velue d = ");
    scanf("%d", &d);
    printf("Enter the velue e =");
    scanf("%d", &e);

    if (a > b)
    {
        if (a > c && a > d && a > e)
        {
            printf("a is maximum");
        }
        else
        {
            printf("e is maximum");
        }
    }
    else if (b > c)
    {
        if (b > d && b > e)
        {
            printf("b is maximum");
        }
        else
        {
            printf("e is maximum");
        }
    }
    else if (c > d)
    {
        if (d > e)
        {
            printf("c is maximum");
        }
        else
        {
            printf("e is maximum");
        }
    }
    else if (d > e)
    {
        printf("d is maximum");
    }
    else
    {
        printf("e is maximum");
    }
}