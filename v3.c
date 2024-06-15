#include<stdio.h>
int main()
{
    int a,b,c,min;

     printf("Enter the velue a = ");
    scanf("%d", &a);
    printf("Enter the velue b = ");
    scanf("%d", &b);
    printf("Enter the velue c = ");
    scanf("%d", &c);
  
    a<b&&a<c?printf("a is minumum"):b<c?printf("b is minimum"):printf("c is minimum");
}