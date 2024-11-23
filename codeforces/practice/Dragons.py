def solve(s,n,data):
    data.sort()
    for i in range(n):
        if s <= data[i][0]:
            return print("NO")
        s += data[i][1]
    return print("YES")

s, n = map(int, input().split())
i = n
data = []
while i:
    data.append(list(map(int, input().split())))
    i-=1
solve(s,n,data)
