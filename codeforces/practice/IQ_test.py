from collections import Counter
def solve(n,s):
    even_ind = [i for i in range(n) if s[i] % 2 == 0]
    odd_ind = [i for i in range(n) if s[i] % 2 != 0]

    if len(even_ind) == 1:
        print(even_ind[0]+1)
    else:
        print(odd_ind[0]+1)

n = int(input())
s = list(map(int, input().split()))
solve(n,s)
