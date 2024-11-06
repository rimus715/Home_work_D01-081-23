#include <stdio.h>
int main()
{
    int a,b,i,sum;
    scanf("%d%d",&a,&b);
    sum=0;
    for (i=a; i<=b; i++)
    sum=sum+i*i;
    printf("%d",sum);
    return 0;
}