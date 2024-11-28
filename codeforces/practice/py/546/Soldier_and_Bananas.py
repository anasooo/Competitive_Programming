def solve(k,n,w):
    output = 0
    for i in range(1, w+1):
        output += i*k
    print(output - n) if ((output - n) >= 0) else print(0)

k, n, w = map(int, input().split())
solve(k,n,w)