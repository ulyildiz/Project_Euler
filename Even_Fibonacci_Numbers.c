#include <stdio.h>

int main()
{
	long first = 1;
	long second = 2;
	long new = 0;
	long sum = 2;

	while (new < 4000000)
	{
		new = first + second;
		first = second;
		second = new;
		if (!(new % 2))
			sum += new;
	}
	printf("%ld", sum);
	return (0);
}