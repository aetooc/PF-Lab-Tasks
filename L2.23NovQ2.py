def common(n,m):
    for i in n:                # Using For loop
        for j in m:            # Nested For loop
            if i == j:
                return True    # Returning the Boolean Value
common([7,2,3,4,5], [6,6,7,8,9])