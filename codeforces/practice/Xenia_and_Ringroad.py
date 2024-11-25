def solve(n, m, a):
    count = a[0]-1
    ind = 0
    for i in range(1, m):
        if a[i] < a[i-1]:
            count += n - a[i-1] + a[i]
        else:
            count += a[i] - a[i-1]
    print(count)
n, m = map(int, input().split())
a = list(map(int, input().split()))
solve(n,m,a)
