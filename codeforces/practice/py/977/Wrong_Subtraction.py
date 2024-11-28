def solve(n, k):
    if n % 10 == 0:
        n = n // pow(10,k)
    else:
        count = 0
        while count != k:
            if n % 10 != 0:
                n -= 1
                count += 1
            else:
                n //= 10
                count += 1
    print(n if n != 0 else 1)

n ,k= map(int, input().split())
solve(n, k)
