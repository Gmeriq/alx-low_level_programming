#!/usr/bin/python3

def island_perimeter(grid):
    p = 0

    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == 1:
                if grid[r - 1][c] == 0:
                    p += 1
                if grid[r][c - 1] == 0:
                    p += 1
                if grid[r + 1][c] == 0:
                    p += 1
                if grid[r][c + 1] == 0:
                    p += 1
    return p
