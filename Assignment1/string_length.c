#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a string (your name): ");
    scanf("%s", name);  // reads a single word (no spaces)

    printf("You entered: %s\n", name);

    int length = strlen(name);

    printf("Length of the string: %d\n", length);

    return 0;
}
