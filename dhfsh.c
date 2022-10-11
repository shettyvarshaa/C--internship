#include<stdio.h>  
 void main()    
{    
int n=999,sum=0,res;       
while(n>0)    
{    
res=n%10;    
sum=sum+res;    
n=n/10;    
}
if(sum>0 && sum<10)
{
    printf("Sum is=%d",sum);    
}
else
{
    res= sum%10 + sum/10;
     printf("sum is=%d",res);
}
} 
