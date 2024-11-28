def solve(n, s):
    dic = {'1': 0, '2': 0, '3': 0, '4': 0}
    rem1 = rem2 = min_pairs = count = 0
    
    for nb in s:
        dic[nb] += 1
    
    count = dic['4']
    if dic['2'] > 1:
        count += dic['2'] // 2
        rem2 = dic['2'] % 2
    elif dic['2'] == 1:
        rem2 = 1

    min_pairs = min(dic['1'], dic['3'])
    count += min_pairs
    dic['1'] -= min_pairs
    dic['3'] -= min_pairs
    
    count += dic['1'] // 4
    rem1 = dic['1'] % 4
    
    if rem2:
        count += 1
        if rem1 == 2:
            rem1 -= 2
        elif rem1 == 1:
            rem1 -= 1
        rem2 = 0

    if rem1 > 0:
        count += 1
    count += dic['3']
    print(count)

n = int(input())
s = input().split()
solve(n, s)

