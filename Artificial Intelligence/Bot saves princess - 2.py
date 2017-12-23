#
def nextMove(n,r,c,grid):
    # Find the Princess
    for i in range(n):
        for j in range(n):
            if grid[i][j] == "p":
                princess_row = i
                princess_col = j
                break
    # Calculate the differences from the provided
    # row,column and princess
    vert = princess_row - r
    horz = princess_col - c
    if vert > 0:
        return("DOWN")
    elif vert < 0:
        return("UP")
    elif horz > 0:
        return("RIGHT")
    elif horz < 0:
        return("LEFT")
    else:
        return("I'm there!")


n = int(input())
r,c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input())

print(nextMove(n,r,c,grid))