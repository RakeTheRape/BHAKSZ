#include <stdio.h>

int main()
{
	printf("segédváltozó csere\n\n");
int a=5;
int b=7;

	printf("eredeti: a=%d b=%d\n",a,b);
int c=a;
a=b;
b=c;

	printf("csere: a=%d b=%d\n",a,b);

	return 0;
}

