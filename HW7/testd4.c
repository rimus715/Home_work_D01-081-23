#include <stdio.h>
void print_num(int num)
{
	if(num>0)
	{
		print_num(num/10);
		printf("%d ", num%10);
	}
}
int main(void)
{
	int num;
	scanf("%d", &num);
	if (num==0)
		printf("%d ", num);
	else
		print_num(num);
	return 0;
}
