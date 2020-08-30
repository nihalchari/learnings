#include <stdio.h>
#include <stdlib.h>

typedef struct a
{
	int a;
	int b;
} c;

c *ptr;

int main()
{
	ptr = (c *)malloc(2 * sizeof(c));
	ptr[0].a = 1;
	ptr[0].b = 2;
	ptr[1].a = 11;
	ptr[1].b = 12;
	ptr[2].a = 21;
	ptr[2].b = 22;
	printf("%d\n", ptr[0].b);
	printf("%d\n", ptr[1].a);
	printf("%d\n", ptr[2].a);
	return 0;
}
