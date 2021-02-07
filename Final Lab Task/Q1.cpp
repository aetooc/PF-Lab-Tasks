// Including header file in my program.
#include<iostream>

// Using the namespace named std.
using namespace std;

// Function Prototype
string function(string str);

// Testing the program
int main(){

    // Assigning a value to string named as 'str'
    string str="Incomprehensibilities";

    // Calling the function
    cout<<function(str)<<endl;

// Returning integer value
return 0;
}

string function(string str){
    // String Variables
    string none=" ";

    //string array
    string arr[100];

    // Integer type variables
    int a=0, e=0, i=0 , o=0 ,u=0;

    // For loop
    for(int i = 0; i<str.length(); i++){
    // str.at(i) in arr[i]
        arr[i]=str.at(i);}
        
    // For loop
    for(int j=0 ; j<=str.length(); j++){
        if(arr[j]=="a"){        // If condition
            a++;}               // Plus 'a' variable

        if(arr[j]=="e"){        // If condition
            e++;}               // Plus 'e' variable

        if(arr[j]=="i"){        // If condition
            i++;}               // Plus 'i' variable

        if(arr[j]=="o"){        // If condition
            o++;}               // Plus 'o' variable

        if(arr[j]=="u"){        // If condition
            u++;}               // Plus 'u' variable
     }
    // Printing a string
    cout << "You have entered " << str.length() << " characters." << endl<<endl;

    // Printing value of 'a' variable
    cout << a << " were the letter a" << endl;

    // Printing value of 'e' variable 
    cout << e << " were the letter e" << endl;

    // Printing value of 'i' variable
    cout << i << " were the letter i" << endl;

    // Printing value of 'o' variable
    cout << o << " were the letter o" << endl;
    
    // Printing value of 'u' variable
    cout << u << " were the letter u" << endl;
    return none;
}
      
