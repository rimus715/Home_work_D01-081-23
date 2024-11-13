#include <stdio.h>
int numsys(int n, int p)
{
    int a,b=1,c=0;
    for (; n>0; n/=p){
        a=n%p;
        c=c+a*b;
        b=b*10;
    }
    return c;
        
}
int main(void)
{
    int n,p;
    scanf("%d%d",&n,&p);
    if(n>=0 && p>=2 && p<=9) 
        printf ("%d",numsys(n,p));
    return 0;
}
