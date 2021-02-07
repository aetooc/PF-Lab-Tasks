// Including header file in my program.
#include<iostream>

// Using the namespace named std.
using namespace std;


int main(){

    // character named as 'val'
    char val;

    // Printing a string
    cout<<"Enter an Alphabet: ";

    // Asking Input from user and storing it in 'val'
    cin>> val;

    // If statement
    if(val=='a' ||val=='e' ||val=='i' ||val=='o' ||val=='u' ||val=='A' ||val=='E' ||val=='I' ||val=='O' ||val=='U')
        cout<<val<<" is a Vowel"<<endl;         // Printing value of 'val' and a string
    else
        cout<<val<<" is a Consonant"<<endl;     // Printing value of 'val' and a string

// Returning value to main()
return 0;
}