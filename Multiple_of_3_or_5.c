#include <stdio.h>

void main()
{
	int sum, three, five;
	sum = three = five = 0;

	do
	{
		sum += three;
		three += 3;
	} while (three < 1000);
	do
	{
		sum += five;
		five += 5;
		if ((five % 3) == 0)
			five += 5;
	} while (five < 1000);
	printf("%d", sum);
}