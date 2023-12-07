def solve():
    n = int(input())
    v1 = list(map(int, input().split()))
    v2 = list(map(int, input().split()))

    sum1 = sum(v1)
    sum2 = sum(v2)

    v1.sort()
    v2.sort()

    t1 = v1[0] * n
    t2 = v2[0] * n

    if (sum1 + t2) < (sum2 + t1):
        print(sum1 + t2)
    else:
        print(sum2 + t1)

# Uncomment the line below if you want to print sum1 and sum2
# print(sum1, sum2)

# Call the function to test it
n = int(input())
for i in range(0, n):
    solve()
