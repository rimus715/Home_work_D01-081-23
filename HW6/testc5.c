// Сумма от 1 до N
// Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

#include <stdio.h>
int sum(int a)
{
    int b=0,i=1;
    for(i;i<=a;i++)
        b=b+i;
    return (b);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
