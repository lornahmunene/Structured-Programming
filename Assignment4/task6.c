#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n + 1];   // extra space for new element

    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the position, where the value to be inserted : ");
    scanf("%d", &pos);

    printf("The current list of the array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
