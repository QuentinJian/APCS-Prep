N, M = list(map(int, input().split()))
num_matrix = [N]
print('N = %d, M = %d'.format(N, M))
for i in range(0,N-1):
    for j in range(M):
        temp_list = list(map(int, input().split()))
        num_matrix[i] = temp_list