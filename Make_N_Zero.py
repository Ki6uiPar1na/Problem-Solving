def n_zero(n):
    if n == 0:
        return True
    elif n < 0:
        return False
    elif n % 3 == 0 or n % 4 == 0:
        return True
    return n_zero(n - 3) or n_zero(n - 4)

t = int(input())
for i in range(t):
    n = int(input())
    
    result = n_zero(n)
    if result:
        print("YES")
    else:
        print("NO")
