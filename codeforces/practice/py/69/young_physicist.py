

t  = int(input())
s = [0,0,0]

while (t > 0):
    n = list(map(int, input().split()))
    for i in range(3):
        s[i] += n[i]
    t -=1

print("YES") if (len(set(s)) == 1 and s[0] == 0) else print("NO")