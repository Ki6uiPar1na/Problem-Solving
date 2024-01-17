def min_operations_to_equal_product(arr):
    n = len(arr)
    neg_count = pos_count = zero_count = 0
    min_pos = float('inf')
    min_neg = float('inf')
    product = 1

    for num in arr:
        if num == 0:
            zero_count += 1
        elif num < 0:
            neg_count += 1
            min_neg = min(min_neg, abs(num))
        else:
            pos_count += 1
            min_pos = min(min_pos, num)

        product *= abs(num)

    if zero_count == n or (neg_count == 1 and zero_count + pos_count == n):
        return 0, arr

    if neg_count % 2 == 1:
        min_neg = min_neg if min_neg != float('inf') else min_pos

    operations = 0
    result = []

    for num in arr:
        if num == 0:
            result.append(0)
        elif num < 0:
            result.append(-min_neg)
            operations += 1
        else:
            result.append(0)

    return operations, result

# Example usage:
arr = [155]
operations, result = min_operations_to_equal_product(arr)
print("Minimum operations:", operations)
print("Resulting array:", result)
