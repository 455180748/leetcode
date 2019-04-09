def isUgly(n):
    while n > 1:
        if n % 2 == 0:
            n /= 2
        elif n % 3 == 0:
            n /=3
        elif n % 5 == 0:
            n /=5
        else:
            return False
    return n > 0

def is2(n):
    while n%2 == 0:
        n /= 2
    return n==1
count = 1
for i in range(10000000):
    if isUgly(i):
        if is2(i):
            print(count, i)
        count += 1
