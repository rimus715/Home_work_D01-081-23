#include <stdio.h>
int main(int argc, char **argv)
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    a<c&&a<b&&a<d&&a<e ? printf("%d",a): b<c&&b<a&&b<d&&b<e ? printf("%d",b): c<a&c<b&&c<d&&c<e ? printf("%d",c) : d<c&&d<b&&d<a&&d<e ? printf("%d",d):printf("%d",e);
    return 0;
}