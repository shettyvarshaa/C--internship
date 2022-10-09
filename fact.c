#include <stdio.h>

int main()
{int i=1,fact=1,n;
printf("enter a number");
scanf("%d",&n);
while(i<=n)
{fact=fact*i;
i++;}
printf("%d",fact);
    return 0;
}
