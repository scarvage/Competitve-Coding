// MIHIR OJHA (20205097)
// ECE - B
#include <stdio.h>
#include <stdlib.h>

void factorial(int n ,int *factorial)
{
    for (int i = 2; i <= n; i++)
    {
        *factorial*=i;
    }

    printf("%d",*factorial);
    
}

int main()
{

    int n;
    scanf("%d",&n);

    int fact = 1;

    factorial(n,&fact);

    

    return 0;
}