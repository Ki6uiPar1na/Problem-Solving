import math

def is_perfect_square(n):
    square_root = int(math.sqrt(n))
    return square_root * square_root == n

def solve():
    n = int(input())
    v = list(map(int, input().split()))
    total_sum = sum(v)

    if is_perfect_square(total_sum):
        print("YES")
    else:
        print("NO")

def main():
    t = int(input())
    
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
