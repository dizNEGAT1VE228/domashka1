
#include <stdio.h>

int main()
{
	int mx, x, i;
	mx = 0;
	i = 0;
	printf("write number \n");
	scanf_s("%d", &x);
	while (x != 1)
	{
		i += 1;
		if (x % 2 == 0)
		{
			x = x / 2;
		}
		else
		{
			x = x * 3 + 1;
		}
		if (mx < x)
		{
			mx = x;
		}
	}
	printf("count steps: %d\n", i);
	printf("max num: %d", mx);


}

