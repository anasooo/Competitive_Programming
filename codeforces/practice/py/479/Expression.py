def solve(a, b, c):
    if a == 1 and c == 1:
        print(a + b + c)
    elif b == 1:
        print(a * (b + c) if a >= c else (a + b) * c)
    elif a == 1 or c == 1:
        print((a + b) * c if a == 1 else a * (b + c))
    else:
        print(a * b * c)

a = int(input())
b = int(input())
c = int(input())
solve(a,b,c)
