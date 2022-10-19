// You are given the sizes of angles of a simple quadrilateral (in degrees) A, B, C and D, in some order along its perimeter. Determine whether the quadrilateral is cyclic.

// Note: A quadrilateral is cyclic if and only if the sum of opposite angles is 180∘.

#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t > 0)
	{
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (a + c == 180 && b + d == 180)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		t--;
	}
	return 0;
}