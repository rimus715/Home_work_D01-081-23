#include <stdio.h>
int main(void)
{
    int a, i=0;
    scanf("%d", &a);
    while(a>0){
        (a%10)==9 ? i++ : i;
        a/=10;
    }
    i==1 ? printf("YES\n") : printf("NO\n");
    return 0;
}