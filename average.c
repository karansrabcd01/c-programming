#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number ");
    scanf("%d %d %d",&a,&b,&c);
    int ave=(a+b+c)/3;
    printf("the average of three number is %d",ave);
    return 0;
}