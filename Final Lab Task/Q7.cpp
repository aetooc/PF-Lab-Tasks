// Including header file in my program.
#include<iostream>
#include <bits/stdc++.h> 

// Using the namespace named std.
using namespace std;

int main(){

    // String named as 'val'
    string val;

    // Printing a string
    cout<<"Enter any three Numbers: ";

    // Asking Input from user and storing it in 'val'
    cin>> val;

    // Printing value of 'val' and a string
    cout<<"Your number forward: "<<endl<<val<<endl;

    // Using reverse function to reverse the string 'val'
    reverse(val.begin(), val.end());

    // Printing value of 'val' and a string
    cout<<"Your number reversed: "<<endl<<val<<endl;

// Returning value to main()
return 0;

}