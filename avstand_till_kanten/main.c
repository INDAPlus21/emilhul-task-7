#include <stdio.h>
#include <math.h>

int main() {
    int rows;
    int cols;

    if (scanf("%d%d", &rows, &cols) == 2) { // Parse input as two integers, the first value representing the rows and the second the collums
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                int min_dist = fmin(fmin(r+1, rows-r), fmin(c+1, cols-c));
                if (min_dist <= 9) {
                    printf("%d", min_dist);
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }
    } else {
        printf("0");
    }                
}