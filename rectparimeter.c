#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the length and breadth of rectangle : ");
    scanf("%d %d",&a,&b);
    int p=2*(a+b);
    printf("the parimeter of rectangle is :%d",p);
    return 0;
}