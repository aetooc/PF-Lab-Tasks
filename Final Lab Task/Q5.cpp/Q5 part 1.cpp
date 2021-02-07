// Including header file in my program.
#include <iostream>

// Using the namespace named std.
using namespace std;

int main()
{
    // Integer type variables
    int count,i;

    // string type variable
    string str;

    // A string named as 'str'
    str = "**********";

    // Outer For loop
    for(count=1; count<=10; count++ ){

        // Inner For Loop
        for(i=1;i<=count;i++)
            cout<< str.substr(0,1);    // Printing 'str' string character from index '0' to '1'
        // For a empty line
        cout<<endl;

    }
// Returning 0 to main()
return 0;
}

