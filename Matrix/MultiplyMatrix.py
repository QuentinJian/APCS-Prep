a, b, c, d = list(map(int, input().split()))
if (a != d or b != c):
    print("Error")
    exit()
A = [[0 for x in range(b)] for y in range(a)]
B = [[0 for x in range(d)] for y in range(c)]

for i in range(a):
    A[i] = list(map(int, input().split()))

for i in range(c):
    B[i] = list(map(int, input().split()))

result = [[sum(a * b for a, b in zip(A_row, B_col))
                        for B_col in zip(*B)]
                                for A_row in A]

print('\n'.join([''.join(['{:3}'.format(item) for item in row]) 
      for row in result]))
print('Error')