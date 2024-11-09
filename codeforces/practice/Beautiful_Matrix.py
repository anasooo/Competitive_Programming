def is_beatyful_matrix(matrix):
    for i in range(5):
        for j in range(5):
            if matrix[i][j] == 1:
                return abs(2-i) + abs(2-j)
def main():
    matrix = []
    for i in range(5):
        matrix.append(list(map(int, input().split())))
    print(is_beatyful_matrix(matrix))
main()
