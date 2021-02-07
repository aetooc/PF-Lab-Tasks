// Including header file in my program.
#include <iostream> 

// Using the namespace named std.
using namespace std;  

int main(){
    // Integer type variables
    int number,i,counter=0;

    // Printing a sting
    cout<<"Enter Your Number: "<<endl;

    // Asking Input from user and storing it in 'number'
    cin>> number;

    // If statement
    if(number>1){
        for(i=2; i<=number; ++i ){      // For loop
            if(number%i==0){            // If statement
                counter++;              // Plus 'counter' variable
            }
        }

        // If statement
        if (counter==1)
            cout<<"It is a Prime Number"<<endl;       // Printing a string
        // else if statement
        else if (counter==0 || counter>1 )
            cout<<"It is Not a Prime Number"<<endl;   // Printing a string
        
        
    }
    else                                              // else statemnt
        cout<<"It is not a Prime Number"<<endl;       // Printing a string
    
    // Returning value to main()
    return 0;
}


