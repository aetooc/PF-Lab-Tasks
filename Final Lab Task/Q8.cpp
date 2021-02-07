// Including header file in my program.
#include<iostream>
#include<cmath>

// Using the namespace named std.
using namespace std;

// Function Prototype
float funtion(float a,float b,float c);

int main(){

    // Printing a string and Recalling the function
    cout<<funtion(1,1.1,2)<<" is the result."<<endl<<endl;

    // Returning value to main()
    return 0;
}

float funtion(float a,float b,float c){
    // foat variables
    float product,power;

    // Printing a,b and c
    cout<<endl<<"Values of a, b and c is "<<a<<", "<<b<<" and "<<c<<endl<<endl;
    // Multiplying a and b and storing it in variable 'product'
    product= a*b;

    // Taking power of variable 'product' with 'c'
    power= pow(product, c);

// Returning power to function()
return power;
}