with open('names.txt','r') as i: # Opening file in 'reading' mode
    A=i.read().strip()           # Read and strip data of 'i' storing in A 
    B=A.split('\n')              # Spliting at '\n'
    newlist=list(B)              # Creating a new list and storing it in a variable
with open('names_sub.txt','w')as file: # Opening file in 'writing' mode
    for i in newlist:
        file.write(i)            # Writing elements of newlist in file
        file.write("       Programming Fundamental Lab, Programming Fundamental, English Composition, Calculus-1\n")
                                 # Writing Subject strings in the file
with open('names_sub.txt','r')as file: # Opening file in 'writing' mode
    print(file.read())           # Printing the required Output