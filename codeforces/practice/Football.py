def solve(s):
    t1 = '0000000'
    t2 = '1111111'
    if t1 in s or t2 in s:
        print('YES')
    else:
        print('NO')

s = input()
solve(s)
