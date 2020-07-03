#!/usr/bin/python3
"""
perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter
    """
    peri = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 1 and j >= 1:
                    peri -= 2
                if grid[i - 1][j] == 1 and i >= 1:
                    peri -= 2
                peri += 4
    return (peri)
