#include <stdio.h>
int main(int argc, char **argv)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c) printf("%d\n",a);
    if (b>c && b>a) printf("%d\n",b);
    if (c>a && c>b) printf("%d\n",c);
    return 0;
}