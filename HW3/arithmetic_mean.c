#include <stdio.h>
int main(void)
{
    int a,b,c;
    float i;
    scanf("%d%d%d",&a,&b,&c);
    i=1.*(a+b+c)/3;
    printf("%.2f\n",i);
    return 0;
}