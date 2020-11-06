#!/usr/bin/python3
"""Defines an island perimeter."""


def island_perimeter(grid):
    perimeter = 0
    i, j = len(grid), len(grid[0])
    for row in range(0, i):
        for col in range(0, j):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == i - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == i - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
