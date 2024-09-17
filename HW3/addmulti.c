#include <stdio.h>
int main(void)
{
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    i=a+b+c;
    printf("%d+%d+%d=%d\n", a,b,c,i);
    i=a*b*c;
    printf("          %d*%d*%d=%d\n", a,b,c,i);
    return 0;
}