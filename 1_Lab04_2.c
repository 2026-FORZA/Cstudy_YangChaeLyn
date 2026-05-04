#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)        // 행
    {
        for (int j = 0; j < n; j++)    // 열
        {
            printf("*");
        }
        printf("\n");  // 줄바꿈
    }

    return 0;
}