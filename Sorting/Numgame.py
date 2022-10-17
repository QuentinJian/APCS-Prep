nums = list(map(int, input().split()))
num_set = set()
dulicate = 1
for i in nums:
    if i in num_set:
        dulicate += 1
    else:
        num_set.add(i)
print(dulicate, ' '.join(str(i) for i in sorted(num_set, reverse=True))