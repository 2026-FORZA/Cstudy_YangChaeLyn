n, m = map(int, input().split())

if n < 1 or n > 100 or m < 1 or m > 3:
    print("INPUT ERROR!")

elif m == 1:
    # 왼쪽 정렬, 별 개수 증가
    for i in range(1, n + 1):
        print("*" * i)

elif m == 2:
    # 왼쪽 정렬, 별 개수 감소
    for i in range(n, 0, -1):
        print("*" * i)

elif m == 3:
    # 가운데 정렬
    for i in range(1, n + 1):
        print(" " * (n - i) + "*" * (2 * i - 1))