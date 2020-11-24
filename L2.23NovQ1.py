a=[1,3,5] # first list a
b=[2,4,6] # second list b
c=[]      # new list c
print("a =",a)
print("b =",b)
#part (1)
for i in a:
    c.append(i)  # Appending elements of a in c
    
for j in b:
    c.append(j)  # Appending elements of b in c
print('Step:1 c=',c)# New combined list c
print(' ')       # For spacing between lines

#part (2)
num = 0
for k in c:
    num += k     # Sum of elements of c     
    avg = num /6 # For Average of elements of c
print('Step:2',"Average of c list's elements:",avg)# Average of elements of c
print(' ')       # For spacing between lines

#part (3)
c.insert(3,42)   # Inserting 42 as a 4th element in c
print('Step:3',c)
print(' ')       # For spacing between lines

#part(4)
c.append(7)      # Appending 7 in c
c.append(8)      # Appending 8 in c
c.append(9)      # Appending 9 in c
print('Step:4',c)
print(' ')       # For spacing between lines

#part (5)
print('Step:5','First two elements of c')
counter=0
for i in c:     # Using For loop
    counter += 1
    if counter > 2:
        break
    else:
        print(i)
#part(6)
print('Step:6 Last element of b =',b[-1]) # Printing the last element of b
print(' ')     # For spacing between lines

#part(7)
counter= 0
for i in a:    # Using For loop
    counter+=1 # Using this to find length of a
print('Step:7 Length of `a` is =',counter)