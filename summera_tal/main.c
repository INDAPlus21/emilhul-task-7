#include<stdio.h>
#include<stdlib.h>

/// Comparer function for number sorting.
int cmp_num (const void *a, const void *b) {
    // *(int*)a means cast the generic pointer a into an 
    // integer pointer and then fetch the value of which it 
    // points to.
    return *(int*)b - *(int*)a;                               
}

int main() {
    int ammount_of_numbers_to_add;
    if (scanf("%d", &ammount_of_numbers_to_add) == 1) {
        int *numbers = malloc(ammount_of_numbers_to_add * sizeof(int));
        for (int i = 0; i < ammount_of_numbers_to_add; i++) {
            if (scanf("%d", &numbers[i]) == 1) {};
        }
        qsort(&numbers[0], ammount_of_numbers_to_add, sizeof(int), cmp_num);
        int sum = 0;
        int half_of_n = (ammount_of_numbers_to_add+1)/2;
        for (int i = 0; i < half_of_n; i++) {
            sum += numbers[i];
        }
        printf("%d\n", sum);
        free(numbers);
    } else {return 1;}
    return 0;
}