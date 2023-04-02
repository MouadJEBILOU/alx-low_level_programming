#include <stdio.h>

void generate_table(int rows, int cols) {
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            int num = i * j;
            if (j != cols) {
                printf("%4d,", num);
            } else {
                printf("%4d", num);
            }
        }
        printf("\n");
    }
}

int main() {
    int rows = 13;
    int cols = 13;

    generate_table(rows, cols);

    return 0;
}
