def shape(n):
    i=0
    m=n
    for i in range(1, n+1):
        i=i + 1
        print('* ' * (n))
        n=n-1
        r = m
    for i in range(0, r):
        for j in range(0, i + 1):
            print("*", end=' ')

        print("\r")
shape(4)