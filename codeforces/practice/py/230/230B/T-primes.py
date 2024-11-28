def get_t_primes():
    MAX_N = 10**6

    is_prime = [True] * (MAX_N + 1)
    is_prime[0] = is_prime[1] = False
    
    for i in range(2, int(MAX_N**0.5) + 1):
        if is_prime[i]:
            for j in range(i*i, MAX_N + 1, i):
                is_prime[j] = False
    
    t_primes = []
    for i in range(2, MAX_N + 1):
        if is_prime[i]:
            t_primes.append(i * i)
    
    return t_primes

def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return True
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return False

n = int(input())
numbers = list(map(int, input().split()))
t_primes = get_t_primes()
for num in numbers:
    print("YES" if binary_search(t_primes, num) else "NO")
