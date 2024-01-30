#!/usr/bin/python3
"""This module contains island_perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    edges = 0
    # loop over grid cells
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:  # means cell is a land
                # calculate edges (water neighbors)
                # left cell
                if grid[i][j - 1] == 0 or j == 0:
                    edges += 1
                # right cell
                if grid[i][j + 1] == 0 or j == (len(grid[i]) - 1):
                    edges += 1
                # top cell
                if grid[i - 1][j] == 0 or i == 0:
                    edges += 1
                # bottom cell
                if grid[i + 1][j] == 0 or i == (len(grid) - 1):
                    edges += 1

    return edges
