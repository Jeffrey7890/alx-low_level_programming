#!/usr/bin/python3

"""
    island_perimeter: calculates the perimeter of an    island
    def island_perimeter(grid): that returns the perimeter
        of the island described in grid:

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
"""


def island_perimeter(grid):
    """
        @island_perimeter: perimeter of an island
        @grid: list of list grid
        Return: perimeter
    """
    height = len(grid)
    width = len(grid[0])
    if (width > 100 or heiht > 100):
        return

    left, right, up, down = (0, 0, 0, 0)
    perimeter = 0

    for i in range(height):

        for j in range(width):
            if (grid[i][j] == 1):

                if (i == 0 and (i + 1) < height - 1):
                    up = 1
                    down = grid[i + 1][j] ^ 1
                elif (i == height - 1 and (i - 1) > 0):
                    up = grid[i - 1][j] ^ 1
                    down = 1

                if (i > 0 and i < height - 1):

                    up = grid[i - 1][j] ^ 1
                    down = grid[i + 1][j] ^ 1

                if (j == 0 and (j + 1) < width - 1):
                    left = 1
                    right = grid[i][j + 1] ^ 1

                elif (j == width - 1 and (j - 1) > 0):
                    right = 1
                    left = grid[i][j - 1] ^ 1

                elif (j > 0 and j < width - 1):
                    left = grid[i][j - 1] ^ 1
                    right = grid[i][j + 1] ^ 1

                perimeter += left
                perimeter += right
                perimeter += up
                perimeter += down
            left, right, up, down = (0, 0, 0, 0)
    return (perimeter)
