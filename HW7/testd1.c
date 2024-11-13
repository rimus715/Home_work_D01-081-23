#include <stdio.h>
void rec(int a)
{
	if (a>1)
	    rec(a-1);
		printf(" %d ", a);
}
int main(void)
{
	int a;
	scanf("%d",&a);
	rec(a);
	return 0;
}

