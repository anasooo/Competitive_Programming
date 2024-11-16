def solve(s):
    hello = "hello"
    pos = 0

    for c in s:
        if pos < 5 and c == hello[pos]:
            pos += 1
    print('YES' if pos == 5 else 'NO')

s = input()
solve(s)
