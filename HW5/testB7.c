#include <stdio.h>
int main(void)
{
    int a,b,c,i=0;
    scanf("%d", &a);
    while(a>0){
        b=a%10;
        a/=10;
        c=a;
        while(c>0){
            c%10==b ? i++ : i;
            c/=10;
        }

    }
    i>=1 ? printf("YES\n") : printf("NO");
    return 0;
}