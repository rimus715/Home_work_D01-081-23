#include <stdio.h>

char caplet(char a)
{
	if (a>='a' && a<='z')
		a=a-0x20;   
	return(a);
}

int main(void)
{
	char a=' ';
	while(a!='.')
	{
		scanf("%c",&a);
		if (a=='.')
			break;
		printf("%c",caplet(a));		
	}	
	return 0;
}