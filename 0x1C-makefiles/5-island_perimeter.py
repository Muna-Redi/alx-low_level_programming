#!/usr/bin/python3

""" program to return the perimeter of an island described in a grid

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100

    Grid is completely surrounded by water, and there is one
    island (or nothing)
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water
    around the island).

"""


def check_height(grid, i, j):
    """ gets the height of the island described in the grid
        Args:
            grid (matrix): list of list describing the island
            i (int): grid_row index where the island begins
            j (int): grid_column index where the island begins
    """
    height = 0
    for x in range(i, len(grid)):
        if grid[x][j] == 1:
            height += 1
        elif grid[x][j] == 0:
            break
    return height


def check_width(grid, i, j):
    """ gets the width of the island described in the grid
        Args:
            grid (matrix): list of list describing the island
            i (int): grid_row index where the island begins
            j (int): grid_column index where the island begins
    """
    width = 0
    for x in range(i, len(grid)):
        for y in range(j+1, len(grid[x])):
            if grid[x][y] == 1:
                width += 1
            elif grid[x][y] == 0:
                if width > 0:
                    return width + 1
                break

    for x in range(i, len(grid)):
        y = j - 1
        while (y > 0):
            if grid[x][y] == 1:
                width += 1
                y -= 1
            else:
                if width > 0:
                    return width + 1
                break


def island_perimeter(grid):
    """ prints the perimeter of the island_in the grid
        Args:
            grid (list of lists): describes the given island
    """

    grid_len = len(grid)

    island_width = 0
    island_height = 0

    for i in range(grid_len):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                island_width = check_width(grid, i, j)
                island_height = check_height(grid, i, j)
                return 2 * (island_width + island_height)
