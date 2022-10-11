#include <stdio.h>
void main()
{
    int n=619,sum,res=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    if(sum>0 && sum<10)
    {
        printf("%d",sum);
        return;
    }
    else
     while(sum>0)
    {
         res+=sum%10;
        sum/=10;
     }
    printf("%d",res);
}