def check_four_indices(arr):
    n = len(arr)

    # Create a dictionary to store the sum of pairs and their corresponding indices
    pair_sum_indices = {}

    # Iterate through all pairs of indices (i, j)
    for i in range(n):
        for j in range(i + 1, n):
            current_sum = arr[i] + arr[j]

            # If the sum already exists in the dictionary, check if the indices are distinct
            if current_sum in pair_sum_indices:
                k, l = pair_sum_indices[current_sum]
                if i != k and i != l and j != k and j != l:
                    return True
            else:
                # Store the current sum and indices in the dictionary
                pair_sum_indices[current_sum] = (i, j)

    return False

# Example usage:
N = int(input("Enter the size of the array: "))
A = list(map(int, input("Enter the array elements separated by space: ").split()))

result = check_four_indices(A)

if result:
    print("YES, there exist 4 distinct indices with the given condition.")
else:
    print("NO, there are no 4 distinct indices with the given condition.")
