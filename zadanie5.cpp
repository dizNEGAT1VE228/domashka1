#include <stdio.h>
int main()
{
    int i=1, x;
    printf("write num: ");
    scanf_s("%d", &x);
    while (i < x) 
    {
        int z = i * i;
        if (z % 10 == i or z % 100 == i or z % 1000 == i or z % 10000 == i)
        {
            printf("%d - %d\n", i,z);
        }
        i += 1;
    }
}

