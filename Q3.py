def function(n):
    e= 0
    o= 0
    number = 0
    while number < n+1:
        if(number % 2 == 0):
            e = e + number
            number=number+1

        else:
            o = o + number
            number=number+1
    print("Even total is", e ,  "and Odd total is", o)