#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    unsigned long int amount_of_names;

    scanf("%lu", &amount_of_names);
    char name[21];
    char names[amount_of_names][42];

    for (unsigned long int i = 0; i < amount_of_names; i++) {
        scanf("%s", &names[i]);
        strcat(names[i], "_");
    }

    for (unsigned long int i = 0; i < amount_of_names; i++) {
        scanf("%s", name);
        strcat(names[i], name);
    }

    qsort(names, amount_of_names, sizeof(name)*2, strcmp);

    unsigned long int numbers_of_unique_names = amount_of_names;

    for (unsigned long int i = 0; i < amount_of_names - 1; i++) {
        if (strcmp(names[i], names[i+1]) == 0) {
            numbers_of_unique_names--;
        } 
    }
    printf("%lu", numbers_of_unique_names);
    return 0;
}