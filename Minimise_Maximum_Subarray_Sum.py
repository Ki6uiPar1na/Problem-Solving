def check_four_indices(arr):
    n = len(arr)

    # Create a set to store the sums of pairs
    pair_sums = set()

    # Iterate through all pairs of indices (i, j)
    for i in range(n):
        for j in range(i + 1, n):
            current_sum = arr[i] + arr[j]

            # If the current sum is already in the set, return True
            if current_sum in pair_sums:
                return True
            else:
                # Add the current sum to the set
                pair_sums.add(current_sum)

    return False

# Example usage:
N = int(input("Enter the size of the array: "))
A = list(map(int, input("Enter the array elements separated by space: ").split()))

result = check_four_indices(A)

if result:
    print("YES, there exist 4 distinct indices with the given condition.")
else:
    print("NO, there are no 4 distinct indices with the given condition.")
