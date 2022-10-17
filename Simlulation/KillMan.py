from code import interact


def solution(n, k, m):
    participates = [*range(1, n)]
    count = 0
    while len(participates) > 1:
        for i in range(k):
            if count == m-1:
                return participates[k-1]
            if i == k-1:
                participates.pop(len(participates) // i)
                print(' '.join(str(j) for j in participates))
                count += 1
    return participates[0]


case_quantity = int(input())
for i in range(case_quantity):
    n, k, m = list(map(int, input().split()))
    print('Case {}: {}'.format(i+1, solution(n , k, m)))
