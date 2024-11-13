//Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.
#include <stdio.h>
int power (int n, int p)
{
    int deg=1;
    for (int i=1; i<=p; i++)
    deg*=n;
    return (deg);
}
int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    printf("%d", power(n,p));
    return 0;
}