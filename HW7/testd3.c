#include <stdio.h>
int rec(int a)
{
	if(a>0)
	{
		printf("%d ", a%10);
		rec(a/10);
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	if (a==0)
		printf("%d ",0);
	else
		rec(a);
	return 0;
}
