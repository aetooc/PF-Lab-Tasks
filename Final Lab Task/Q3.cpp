
// Including header file in my program.
#include <iostream>

// functinon named as 'function'
void function(long long  int &number) {  

    // Integer Variables
    int Even=0,Odd=0,Zero=0,val=0;

    // While loop
    while (number > 0) {

        // modulus of number with 10 and storing it in variable 'val'
        val = number % 10;

        // If statement
        if (val == 0) 
            Zero++;                 // Plus 'Zero' variable

        // else if statement
        else if (val % 2 == 1)      
            Odd++;                  // Plus 'Odd' variable
        
        // else statement
        else 
            Even++;                 // Plus 'Even' variable

        // Dividing variable 'number' with 10
        number /= 10;
    }

    // Printing value of 'Zero' variable
    std::cout << "No of zeros Digits = " << Zero << std::endl;

    // Printing value of 'Odd' variable
    std::cout << "No of odd Digits = " << Odd << std::endl;

    // Printing value of 'Even' variable
    std::cout << "No of Even Digits = " << Even << std::endl;
}

int main ()
{
    // Integer variable of size '8 bytes'.
    long long int number;

    // Printing a String
    std::cout<<"Enter any No. " <<std::endl;

    // Asking Input from user and storing it in 'number'
    std::cin >>number;

    // Printing an empty line
    std::cout<<std::endl;

    // Recalling function
    function(number);

    // Returning value to main()
    return 0;
}

