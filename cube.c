#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter any number that you want to know the cube:");
    scanf("%d",&a);
    int c;
    c = pow (a,3);
    //c=a*a*a;
    printf("the cube of the %d is %d",a,c);
    return 0;
}
