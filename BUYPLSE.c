// Chef went to a shop and buys a pens and b pencils. Each pen costs x units and each pencil costs y units. Now find what is the total amount Chef will spend to buy a pens and b pencils.

#include <stdio.h>

int main(void) {
	int a,b,x,y,c,d;
	scanf("%d %d %d %d", &a,&b,&x,&y);
	c = a*x;
	d = b*y;
	printf("%d",c+d);
	return 0;
}

