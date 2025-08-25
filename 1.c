function findSum(limit):
    sum = 0
    for i from 1 to limit - 1:
        if i mod 3 == 0 or i mod 5 == 0:
            sum = sum + i
    return sum