// Including header file in my program.
#include<iostream>

// Using the namespace named std.
using namespace std;

int main(){
    // Integer variables
    int sum,i,j;

    // Assigning a value to 'sum' variable
    sum= 100;

    // Storing value of 'sum' in 'j'
    j=sum;

    // Printing 'sum' variable and a string
    cout<<"All possible values for: a + b = "<<sum<<endl;

    // For loop
    for(i=0; i<=sum; i++){

        // while loop
        while(j >= 1){

            // printing values of 'i', 'j' and 'sum' with a string
            cout<<i<<" + "<<j--<<" = "<<sum<<endl;

            // Using to break the loop
            break;
        }
    }
    
// Returning value to main()
return 0;    
}