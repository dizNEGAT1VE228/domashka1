
#include <stdio.h>
int main()
{
	int x = 21;
	int y = 1;
	int h = 1;
	int z = 0;
	printf("only 21 matches, select 1 to 3 matches to collect them\n");
	while (1)
	{
		if (h % 2 == 1 and x < 2)
		{
			printf("You lose");
			return false;
		}
		else if (h % 2 == 0 and x < 2)
		{
			printf("You Win!");
			return false;
		}
		else
		{

			if (h % 2 == 0)
			{
				int mv = 4 - z;
				x -= mv;
				h += 1;
				printf("PC took %d matches \n", mv);

			}
			else
			{
				printf("write num: \n");
				scanf_s("%d", &z);
				while (z > 3)
				{
					printf("Incorrect number of matches, choose from 1 to 3");
					scanf_s("%d", &z);
				}

				x = x - z;
				h += 1;
			}
			printf("matches left: %d\n", x);
		}
	}
	return(0);
}

