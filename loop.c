#include <stdio.h>

int main() {
    int num;

    for(int i = 5; i > 0; i--) {
        printf("Chances left - %d\n", i);
        printf("Enter any number between 0-99:\n");
        scanf("%d", &num);

        if (num > 99 || num < 0) {
        printf("Only pick number between 0-99!\n");
        printf("You picked %d\n", num);
        break;
        }

        printf("Input accepted as %d\n", num);
    }

    printf("Outside of for loop!\n");
    return 0;
}
