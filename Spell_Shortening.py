def new(s):
    n = len(s)
    result = None

    for i in range(n - 1):
        if s[i] > s[i + 1]:
            result = s[:i] + s[i + 1:]
            break
    if result is None:
        result = s[:-1]
    print(result)

t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    new(s)
