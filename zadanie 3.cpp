#include <stdio.h>

int main() {
    int h;
    printf("write odd num: ");
    scanf_s("%d", &h);

    if (h <= 0 or h % 2 == 0) {
        printf("Error\n");
        return 1;
    }

    int mid = h / 2;

    int i = 0;
    while (i <= mid) {
        int s = 0;
        while (s < mid - i) {
            printf("%c", ' ');
            s = s + 1;
        }

        if (i == 0) {
            printf("%c", '*');
        }
        else {
            printf("%c", '*');
            int k = 0;
            while (k < 2 * i - 1) {
                printf("%c", ' ');
                k = k + 1;
            }
            printf("%c", '*');
        }
        printf("\n");

        i = i + 1;
    }

    i = mid - 1;
    while (i >= 0) {
        int s = 0;
        while (s < mid - i) {
            printf("%c", ' ');
            s = s + 1;
        }

        if (i == 0) {
            printf("%c", '*');
        }
        else {
            printf("%c", '*');
            int k = 0;
            while (k < 2 * i - 1) {
                printf("%c", ' ');
                k = k + 1;
            }
            printf("%c", '*');
        }
        printf("\n");

        i = i - 1;
    }

    return 0;
}
