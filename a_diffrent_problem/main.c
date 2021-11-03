#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int x;
    long long int y;

    while (scanf("%lli%lli", &x, &y) == 2) {
        printf("%lli\n", llabs(x-y));
    }
    return 0;
}