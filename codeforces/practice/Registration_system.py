def solve(n, s):
    database = set()
    count = {}
    output = []

    for name in s:
        if name not in database:
            database.add(name)
            count[name] = 1
            output.append("OK")
        else:
            while f"{name}{count[name]}" in database:
                count[name] += 1
            new_name = f"{name}{count[name]}"
            database.add(new_name)
            count[name] += 1
            output.append(new_name)

    print("\n".join(output))


n = int(input())
s = [input().strip() for _ in range(n)]
solve(n, s)

