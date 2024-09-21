#include <stdio.h>
int main(int argc, char **argv)
{
    int a,b;
    scanf("%d%d",&a,&b);
    a>b ? printf("Above") : a<b ? printf("Less") : printf("Equal");
    return 0;
}