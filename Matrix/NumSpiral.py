spiral_size = int(input())
print ('spiral_size = ' + str(spiral_size))
direction = int(input())
dir_index = 0
matrix = [spiral_size+1]
step = 1
nums = 0
movement_row = {0:0, 1:-1, 2:1, 3:1}
movement_col = {0:-1, 1:0, 2:1, 3:0}

for i in range(spiral_size):
    matrix[i] = input()
    print('matrix[i] = ' + matrix[i])

row  = spiral_size // 2
col = spiral_size // 2

print(matrix[row][col] ,end='')

while nums < (spiral_size ** 2):
    for j in range(step):
        row += movement_row.get(direction)
        col += movement_col.get(direction)
        nums += 1
        print(matrix[row][col], end='')
        if nums == spiral_size**2:
            break
    if dir_index%2 == 0 :
        step += 1
    direction += 1 
    direction %= 4
