#include <stdio.h>

int main() {
    int n;
    printf("The number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("The elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *p = &arr[n - 1];

    printf("The elements of the array in reverse order are:\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", *p);
        p--;
    }

    return 0;
}
