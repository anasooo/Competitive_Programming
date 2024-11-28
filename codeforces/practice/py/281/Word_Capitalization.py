def solve(word):
    c = word[0].upper()
    new = c + word[1:]
    print(new)

word = input()
solve(word)
