#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Parameters:
        grid (List[List[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 sides to the
                # perimeter
                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 if the left neighbor is also
                    # land
                # Check top neighbor
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 if the top neighbor is also
                    # land
    return perimeter
