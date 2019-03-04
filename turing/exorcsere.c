#include <stdio.h>

int main()
{
	printf("Csere exorral\n\n");
	int a=5;
	int b=7;
	printf("Eredeti értékek: a=%d b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Felcserélt értékek: a=%d b=%d\n", a,b);
	return 0;
}

