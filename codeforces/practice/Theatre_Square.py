def solve(m,n,a):
    x = m // a
    y = n // a
    if m % a != 0:
        x += 1
    if n % a != 0:
        y += 1
    print(x * y)

m, n, a = map(int, input().split())
solve(m,n,a)