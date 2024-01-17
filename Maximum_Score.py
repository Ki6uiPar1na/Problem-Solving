def max_score(arr):
    n = len(arr)
    score = 0

    for i in range(0, n, 2):
        score += abs(arr[i] - arr[i + 1])

    return score

# Example usage:
t = int(input())
for i in range(t):
    a = []
    n = int(input())
    for i in range(n):
        b = int(input())
        a.append(b)
    max_score
