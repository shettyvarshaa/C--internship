#include <stdio.h>
void main()
{
    int n,cp,x,sum=100,i;
    float r;
    printf("enter the value");
    scanf("%d%d%f",&n,&cp,&r);
    
    for(i=1;i<=n;i++)
        sum=sum+(r/100)*sum;
     x=(100*cp)/sum;
        
    printf("%d",x);
}
