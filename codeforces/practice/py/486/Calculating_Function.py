def f(n):
    if n % 2 == 0:
        return n // 2
    else:
        return -((n + 1) // 2)

n = int(input())
print(f(n))
