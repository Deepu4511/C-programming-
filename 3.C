#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("HiHello\n");
    } else if (num % 3 == 0) {
        printf("Hi\n");
    } else if (num % 5 == 0) {
        printf("Hello\n");
    } else {
        printf("None\n");
    }

    return 0;
}
