#include <stdio.h>

int main()
{
	printf("valtozocsere valtozo nelkul\n\n");
int a=5;
int b=7;
	printf("eredeti: a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
	printf("felcserelt: a=%d b=%d\n",a,b);
	return 0;
}

