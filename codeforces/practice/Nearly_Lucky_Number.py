def is_lucky(n):
    n = sorted(list(set(n)))
    if len(n) == 1:
        return (n[0] == '4' or n[0] == '7')
    else:
        return (('7' and '4' in n) and len(n) == 2)

def solve(s):
    count = s.count('4') + s.count('7')
    print('YES' if is_lucky(str(count)) else 'NO')
s = input().strip()
solve(s)
