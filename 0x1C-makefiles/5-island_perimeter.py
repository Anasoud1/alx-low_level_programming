#!/usr/bin/python3
'''module island_perimetre'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    y = 0
    p = 0
    s = 0
    for lis in grid:
        x = 0
        for i in lis:
            if i == 1:
                p = 4
                if x + 1 < len(lis) and lis[x + 1] == 1:
                    p -= 1
                if y + 1 < len(grid) and grid[y + 1][x] == 1:
                    p -= 1
                if x > 0 and lis[x - 1] == 1:
                    p -= 1
                if y > 0 and grid[y - 1][x] == 1:
                    p -= 1
                s += p
            x += 1
        y += 1
    return s
