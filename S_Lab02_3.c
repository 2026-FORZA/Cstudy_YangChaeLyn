#include <stdio.h>

int main() {
    char s[51];
    int seg[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int sum = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        sum += seg[s[i] - '0'];
    }

    printf("%d\n", sum);

    return 0;
}