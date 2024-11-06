#include <stdio.h>
int main(void)
{
    int a, i=0;
    scanf("%d", &a);
    while(a>0){
        (a%10)==((a%100)/10) ? i++ : i;
        a/=10;
    }
    i>=1 ? printf("YES\n") : printf("NO");
    return 0;
}