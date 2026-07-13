#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {   // i가 N의 약수이면
            count++;
            if (count == K) {
                printf("%d", i);
                return 0;
            }
        }
    }

    // K번째 약수가 없는 경우
    printf("0");

    return 0;
}