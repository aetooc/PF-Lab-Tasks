with open('names.txt','r') as i: # Opening file in 'reading' mode
    A=i.read().strip()           # Read and strip data of 'i' storing in A 
    B=A.split('\n')              # Spliting at '\n'
    newlist=list(B)              # Creating a new list and storing it in a variable
    newsum=0                     # Creating a new variable 'newsum'
    for word in newlist:
        newsum += len(word)      # Adding the length
    print('The length of sum of the names.txt file is :', newsum)
                                 # Printing the required Output