import os              # Importing os
emptylist=[]           # Creating a empty list
Emptylist=[]           # Creating a empty list
def Menu():            # Defining a funtion named as Menu
    
    menu={             # Creating dictionary for menu items
        'Zinger Burger': 230,
        'Zinger Cheese Burger': 260,
        'Thames Special Burger': 320,
        'Beef Burger':250,
        'Tower Burger':320,
        'Fish Burger':260,
        'Fish Cheese Burger':290,
        'Fire Stone Burger':170,
        'Crispy Burger':170,
        'Chicken Burger':180,
        'Tikka Burger':170,
        'Shami Burger':170
    }
    smenu={            # Creating dictionary for menu items
        'Arizona Steak':650,
        'Musharoom Steak':650,
        'Pepper Steak':650,
        'Polo Tuscany':650
    }
    directory='.'      # Assigning variable named as directory
    file='bill.txt'    # Assigning string name of file to a variable
    filepath= os.path.join(directory,file)            # File Path
    
    x= str(input("Select Any Item:\n1.Burger\n2.Steaks\n3.N or no to exit.\n"))# Assigning Input as str from the user and storing it in variable 'x'
    if x == 'Burger' or x=='burger' or x=='1':        # Using IF condition
        count=0        # Assigning 0 to count variable
        print('Burgers Menu:\n')                      # Printing a string
        
        for i in menu: # Assigning key of menu as i
            value= menu[i]                            # Accessing value of key 'i'
            count+=1   # Adding 1 to counter variable
            print(count,' ',i,':',value,'\n')         # Printing Menu
        y=str(input('Select any item:'))              # Asking user for the item
        
        for k in menu: # Assigning key of menu as 'k'
            if y==k:
                Quantity=int(input('\nplease tell quantity'))                   # Asking User for the quantity
                value=menu[k]                         # Accessing value of key 'k'
                print("\nPrice for",Quantity,k,"is = ",value*Quantity)          # Printing the sum
                print("\nAfter GST Tax Price for",Quantity,k,"is = ",'Rs',value*Quantity+150,"\n_____________________\n\nDo you want anything else?")# Printing sum plus tax
                final=value*Quantity+150              # Adding final amount in a variable
                A="After GST Tax Price for "+str(Quantity)+' '+str(k)+' is = '+'Rs. '+str(final)   # Storing a string in a variable
                emptylist.append(A)                   # Appending in an empty list
                Emptylist.append(final)               # Appending in an empty list
                with open(filepath,'w') as f:         # Opening the file
                    for i in emptylist:               # Accesing list as i 
                        f.write(i+'\n')               # Writing in a file
                    count=0                           # Assing count 0
                    for j in Emptylist:               # Appending in an Emptylist
                        count+=j                      # Adding value in count variable
                    f.write('Total Price is ='+ 'Rs.'+ str(count))                                 # Writing in the file
    elif x == 'Steaks' or x=='steaks' or x=='2':      # Elif statement
        count=0        # Assigning 0 to the count variable
        print('Steaks Menu:\n')                       # Printing a string
        
        for i in smenu:# Assigning key of menu as i                        
            value1= smenu[i]                          # Accessing value of key 'i'
            count+=1   # Adding 1 to counter variable
            print(count,' ',i,':',value1,'\n')        # Printing the menu
        y=str(input('Select any item:'))              # Asking user for the item  
        
        for k in smenu:# Assigning key of menu as i
            if y==k:
                Quantity=int(input('\nplease tell quantity'))                    # Asking User for the quantity
                value=smenu[k]                        # Accessing value of key 'k'
                print("\nPrice for",Quantity,k,"is = ",value*Quantity)           # Printing sum
                print("\nAfter GST Tax Price for",Quantity,k,"is = ",'Rs.',value*Quantity+150,"\n_____________________\n\nDo you want anything else?")# Printing sum plus tax
                final=value*Quantity+150              # Adding final amount in a variable
                A="After GST Tax Price for "+str(Quantity)+' '+str(k)+' is = '+'Rs. '+str(final)   # Storing a string in a variable
                emptylist.append(A)                   # Appending in a empty list
                Emptylist.append(final)               # Appending in a empty list
                with open(filepath,'w') as f:         # Opening the file
                    for i in emptylist:               # Accesing emptylist using for loop
                        f.write(i+'\n')               # Writing in the file
                    count=0                           # Assigning 0 to the count variable
                    for j in Emptylist:               # Accesing Emptylist using for loop
                        count+=j                      # Adding Value in count variable
                    f.write('Total Price is = '+ 'Rs.'+ str(count))                                # Writing in the file
    elif x== 'N' or x== 'no':                         # Elif Statement
        print('_____________________\n')
        with open(filepath, 'r') as f:
            print(f.read())
        return print("\nThanks For Choosing Our Brand.")# Printing a string
    
    else:              # else statement
        print("\nItem isn't available")               # Printing a string
        
    while True:        # while loop
        Menu()         # Recalling Menu Function
        if x!="N" or x!="no":                         # If statement
            break
Menu()
