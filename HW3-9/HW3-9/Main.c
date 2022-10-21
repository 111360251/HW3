#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long a(int x)
{
	if (x > 0)
	{
		return x * a(x - 1);
	}
	else return 1;
}

int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%d!=%ld\n", i, a(i));
	}
	system("pause");
	return 0;
}
