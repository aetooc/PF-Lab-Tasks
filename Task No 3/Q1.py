myfile= open('names.txt','w')    # Opening file in 'write' mode
myfile.write('Awais\nAli\nAmaan\nAsghar\nAleem\nAbdullah\nAbid\nArham\nAayan\nAnas')    # Writing elements in file
myfile.close()                   # Closing the file which I opened

with open('names.txt','r') as i: # Opening file in 'reading' mode
    A=i.read().strip()           # Read and strip data of 'i' storing in A 
    B=A.split('\n')              # Spliting at '\n'
    print('The First 4 Characters of Every Word:')    # Printing this before Output for better understanding
    for j in B:
        print(j[:4])             # Printing the required Output
        