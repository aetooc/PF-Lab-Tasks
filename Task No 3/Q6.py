def print_name(n):         # defing fuction 'print_name'
    with open('names.txt','r') as i:  # Opening file in 'reading' mode
        A=i.read().strip() # Read and strip data of 'i' storing in A 
        B=A.split('\n')    # Spliting at '\n'
        newlist=list(B)    # Creating a new list and storing it in a variable
        for i in newlist:
            if len(i) == n:# 'n' variable is the input by the user
                return i  # Printing the required Output
print_name(5)              # Recalling the 'print_name' function
