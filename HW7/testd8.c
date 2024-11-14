#include <stdio.h>
void recurs(int a, int b)
{
	if(a>=b)
	{
			printf("%d ", a);
			if(a>b)
			recurs(a-1,b);
	}
	else 
		if(a<b)
	{
		recurs(a,b-1);
		printf("%d ", b);	
	}
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	recurs(a,b);
	
return 0;
}

