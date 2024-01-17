def min_penalty(a):
    n = len(a)

    # Calculate the prefix sum of the array
    prefix_sum = [0] * (n + 1)
    for i in range(n):
        prefix_sum[i + 1] = prefix_sum[i] + a[i]

    # Initialize the dp array to store the minimum penalties for each split point
    dp = [float('inf')] * (n + 1)
    dp[0] = 0

    for i in range(1, n + 1):
        for j in range(i):
            # Calculate penalty for the subarray a[j:i]
            penalty = prefix_sum[i] - prefix_sum[j]
            
            # Update the dp array with the minimum penalty
            dp[i] = min(dp[j], penalty)

    return dp[n]

# Example usage:
arr = [1, 2, 3, 4, 5]
result = min_penalty(arr)
print("Minimum Penalty:", result)
