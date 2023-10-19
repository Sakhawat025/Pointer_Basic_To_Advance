#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        char *ptr = &s[i];
        printf("%c %d\n", s[i],ptr);
    }

    return 0;
}
