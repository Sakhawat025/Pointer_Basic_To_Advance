#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x < 0) {
    } else {
        int factorial = 1;
        int *ptr = &factorial;

        for (int i = 1; i <= x; i++) {
            *ptr =*ptr*i;
        }

        printf("%d\n",*ptr);
    }

    return 0;
}
