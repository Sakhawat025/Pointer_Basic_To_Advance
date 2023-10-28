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

    int *p = arr;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *p;
        p++;
    }

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
