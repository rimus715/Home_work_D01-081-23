#include <stdio.h>
int main(int argc,char **argv)
{
    int a;
    scanf("%d", &a);
    a==1||a==12||a==2 ? printf("winter") : a==3||a==4||a==5 ? printf("spring") : a==6||a==7||a==8 ? printf("summer"): printf("autumn");
    return 0;
}