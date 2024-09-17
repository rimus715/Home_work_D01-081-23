#include <stdio.h>
int main(void)
{
    int a,i;
    printf("Input number:");
    scanf("%d",&a);
    i=(a%10)*((a/10)%10)*((a/100)%10);
    printf("%d",i);
    return 0;
}