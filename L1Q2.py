def function2(number):


    factorial = 1
    if number ==0:
        print('1')
    if number < 0:
        print("Sorry, Please enter a Positive Integer")
    else:
        for i in range(1,number + 1):
            factorial = factorial*i
        print("The factorial of",number,"is",factorial)
