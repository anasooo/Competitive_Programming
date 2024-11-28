def solve(a,b):
    count = 0
    while a <= b:
        a *= 3
        b *= 2
        count += 1
    return count
    
a, b = map(int, input().split())
print(solve(a,b))
