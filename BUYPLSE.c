#include <stdio.h>

int main(void)
{
	int a, b, x, y, c, d;
	scanf("%d %d %d %d", &a, &b, &x, &y);
	c = a * x;
	d = b * y;
	printf("%d", c + d);
	return 0;
}
