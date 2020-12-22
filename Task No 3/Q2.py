with open('names.txt','r') as i: # Opening file in 'reading' mode
    A=i.read().strip()           # Read and strip data of 'i' storing in A 
    B=A.split('\n')              # Spliting at '\n'
    newlist=list(B)              # Creating new list and storing it in a variable
    short_word = newlist[0]      # Assuming the first element as shortest
    for word in newlist:         
        if len(short_word) > len(word):
            short_word = word    # Storing shortest word in a variable
    print('The shortest word is:', short_word ,'\nAnd the  Length of shortest word is:', len(short_word))
                                 #Printing the required Output