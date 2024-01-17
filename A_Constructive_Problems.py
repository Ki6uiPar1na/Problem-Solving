def minimum_rebuilds(n, m, cities):
    rebuilt_cities = set()

    # Iterate through the matrix and mark the initially rebuilt cities
    for i in range(n):
        for j in range(m):
            if cities[i][j] == 1:
                rebuilt_cities.add((i, j))

    # Iterate through the matrix and mark the influence of rebuilt cities
    for i in range(n):
        for j in range(m):
            if cities[i][j] == 1:
                # Mark horizontally neighboring cities
                if i > 0:
                    rebuilt_cities.add((i - 1, j))
                if i < n - 1:
                    rebuilt_cities.add((i + 1, j))

                # Mark vertically neighboring cities
                if j > 0:
                    rebuilt_cities.add((i, j - 1))
                if j < m - 1:
                    rebuilt_cities.add((i, j + 1))

    # Count the number of collapsed cities without rebuilt neighbors
    government_rebuilds = sum(cities[i][j] == 0 and all((ni, nj) not in rebuilt_cities for ni, nj in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]) for i in range(n) for j in range(m))

    return government_rebuilds

# Example usage:
n = 2
m = 2
cities = [
    [0, 0, 0, 0],
    [0, 0, 1, 0],
    [0, 1, 0, 0],
    [0, 0, 0, 0]
]

result = minimum_rebuilds(n, m, cities)
print(result)
