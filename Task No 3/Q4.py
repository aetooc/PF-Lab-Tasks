with open('names.txt','r') as i: # Opening file in 'reading' mode
    A=i.read().strip()           # Read and strip data of 'i' storing in A 
    B=A.split('\n')              # Spliting at '\n'
    newlist=list(B)              # Creating a new list and storing it in a variable
    newsum=0                     # Creating a new variable 'newsum'
    for word in newlist:
        newsum += len(word)      # Adding the length
    length= newsum//len(newlist) # Average of the length
    print('The Average of sum of the names.txt file is:', length)
                                 # Printing the required Output