def count_fork_positions(xK, yK, xQ, yQ, a, b):
    count = 0
    
    # Iterate through all possible positions of the knight
    for dx in [-a, a]:
        for dy in [-b, b]:
            xN = xK + dx
            yN = yK + dy
            
            # Check if the knight is within the chessboard bounds
            if -1000 <= xN <= 1000 and -1000 <= yN <= 1000:
                # Check the conditions for forking both king and queen
                if (abs(xN - xQ) == a and abs(yN - yQ) == b):
                    count += 1
    
    return count

# Example usage:
xK, yK = 0 , 0  # King's position
xQ, yQ = 3, 3 # Queen's position
a, b = 2, 1  # Knight's movement

result = count_fork_positions(xK, yK, xQ, yQ, a, b)
print("Number of positions where a knight would fork both king and queen:", result)
