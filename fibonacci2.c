#include<stdio.h>
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}
int main ()
{int n,i;
    printf(" enter the number of terms :");
    scanf("%d",&n);
    printf("the fibonacci series is :"); 
    for(i=0;i<n;i++){
    printf(" %d",fib(i));
    }
    
}