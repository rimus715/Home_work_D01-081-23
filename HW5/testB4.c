#include <stdio.h> 
int main(void)
{
    int a,i;
    scanf ("%d", &a);
    i=0;
    while (a!=0){
        i++;
        a=a/10;
    }
    i!=3 ? printf("NO") : printf("YES");
    return 0;
}