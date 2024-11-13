#include <stdio.h>
unsigned long long sum(int a);
int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%llu", sum(a));
	return 0;
}
unsigned long long sum(int a)
{
	unsigned long long b=2;
	for (int i=1; i<a-1; i++)
		b=b*2;
	if (a==1)
		b=1;
	return (b);
}