#include <stdio.h>

void main(void)
{
	int a, b, c, d;

	printf("Enter numbers a, b, c, d:\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	if ((a <= b) && (a <= d))
	{
		if (b>c)
		{
			if (b > d)
				printf("Change numbers:\n%d %d %d %d", a, b * b, c, d);
			else
				printf("Change numbers:\n%d %d %d %d", a, b, c, d * d);
		}
		else
		{
			if (c > d)
				printf("Change numbers:\n%d %d %d %d", a, b, c * c, d);
			else
				printf("Change numbers:\n%d %d %d %d", a, b, c, d * d);
		}
	}
	else
	{
		if ((a < b) && (a < c) && (a < d))
			printf("Change numbers:\n%d %d %d %d", (b + c + d) / 2, b, c, d);
		if ((b < a) && (b < c) && (b < d))
			printf("Change numbers:\n%d %d %d %d", a, (a + c + d) / 2, c, d);
		if ((c < a) && (c < b) && (c < d))
			printf("Change numbers:\n%d %d %d %d", a, b, (a + b + d) / 2, d);
		if ((d < a) && (d < b) && (d < c))
			printf("Change numbers:\n%d %d %d %d", a, b, c, (a + b + c) / 2);
	}
}