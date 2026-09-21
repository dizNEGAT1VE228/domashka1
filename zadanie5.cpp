#include <stdio.h>


int returnAvtomorf(int x)
{
    int tens = 10;
    int z = x * x;
    while (z != 0)
    {
        if ((x >= tens and x < tens * 10))
        {
            tens = tens * 10;
            if (z % tens == x)
            {
                printf("%d - %d\n", x, z);
                z = 0;
            }
            else {
                z = 0;
            }
        }
        else if (x < tens)
        {
            if (z % tens == x)
            {
                printf("%d - %d\n", x, z);
            }
            z = 0;
        }
        else
        {
            tens = tens * 10;
        }
    }
    return x;
}
int main()
{
    int i=1, x;
    printf("write num: ");
    scanf_s("%d", &x);
    while (i < x) 
    {
    returnAvtomorf(i);
        i += 1;
    }
    

    return 0;
}

