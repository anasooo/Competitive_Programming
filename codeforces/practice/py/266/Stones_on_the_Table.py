def remove(s):
    count = 1
    for i in range(0, len(s)-1):
        if s[i] != s[i+1]:
            count += 1
    return count

def solve(n,s):
    print(n - remove(s))
n = int(input())
s = input()
solve(n,s)
