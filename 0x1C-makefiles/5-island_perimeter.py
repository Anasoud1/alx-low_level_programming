#!/usr/bin/python3
def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    for lis in grid:
        for i in lis:
            if i == 1:
                s += 1
    if s == 1:
        return 4
    p = 3 * 2 + 2 * (s - 2)
    return p
