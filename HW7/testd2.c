#include <stdio.h>
int rec(int a)
{
		if (a==1)
			return 1;
		else 
			return rec(a-1)+a;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", rec(a));
	return 0;
}
