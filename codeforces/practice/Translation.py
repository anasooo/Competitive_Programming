def rev_str(s):
    return s[::-1]

def solve(s,t):
    print('YES' if s == rev_str(t) else 'NO')

s = input()
t = input()
solve(s,t)
