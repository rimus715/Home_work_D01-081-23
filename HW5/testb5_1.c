#include <stdio.h>
#include <inttypes.h>
int main(void)
{
    int32_t a,sum=0;
    scanf ("%d", &a);
    while (a>0){
        sum=sum+a%10;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}