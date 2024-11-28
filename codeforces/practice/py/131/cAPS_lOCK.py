def solve(s):
    u = 0
    size = len(s)
    for i in range(1, size):
        if s[i].isupper():
            u += 1
    if s[0].isupper() and u == size-1:
        print(s.lower())
    elif s[0].islower() and u == size-1:
        print(s[0].upper() + s[1:].lower())
    elif size == 1:
        print(s[0].upper())
    else:
        print(s)

s = input()
solve(s)
