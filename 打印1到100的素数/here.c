#include <stdio.h>
#include <math.h>

int main()
{
	int x,y,panbie;
	for (x = 2;x <= 100;x++)
	{
		panbie = 1;
		for (y = 2;y <= sqrt(x);y++)
		{
			if (x % y == 0)
				panbie = 0;
		}
		if (panbie == 1)
			printf("%d ", x);
	}
	printf("\nÎåÒ»¿ìÀÖ! Kiana\n");
	return 0;
}