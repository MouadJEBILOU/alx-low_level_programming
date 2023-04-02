#include <stdio.h>

int main(void)
{
    int i, count = 2;
    unsigned int first = 1, second = 2, third;

    printf("%u, %u", first, second);
    for (i = 3; i <= 98; i++) {
        third = first + second;
        printf(", %u", third);
        first = second;
        second = third;
        count++;

        if (count == 10 && i != 98) {
            printf(",\n");
            count = 0;
        }
    }
    printf("\n");

    return 0;
}
