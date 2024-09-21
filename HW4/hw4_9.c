#include <stdio.h>
int main(int argc,char **argv)
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    a<b&&b<c ? printf("YES") : printf("NO");
    return 0;
}