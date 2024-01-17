from collections import Counter

def min_operations_to_equalize(arr, m):
    n = len(arr)
    
    # Count the frequency of each element
    element_count = Counter(arr)
    
    # Find the maximum frequency
    max_frequency = max(element_count.values())
    
    # Calculate the minimum number of operations
    min_operations = 0
    for count in element_count.values():
        if count < max_frequency:
            min_operations += count
        elif count > max_frequency:
            min_operations += (count - max_frequency)
    
    return min_operations

# Example usage:
N = int(input("Enter the size of the array: "))
A = list(map(int, input("Enter the array elements separated by space: ").split()))
M = int(input("Enter the maximum number of elements to increase: "))

result = min_operations_to_equalize(A, M)
print(f"The minimum number of operations required is: {result}")
