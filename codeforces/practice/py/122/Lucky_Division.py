
def almost_lucky(n):
    lucky = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
    for l in lucky:
        if n % l == 0:
            return print('YES')
    print('NO')

n = int(input())
almost_lucky(n)

