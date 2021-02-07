// Including header file in my program.
#include <iostream>

// Using the namespace named std.
using namespace std;

int main()
{
    // Integer type variables    
    int count,i,k=9;

    // string type variable
    string str,sp;

    // A string named as 'str'
    str = "**********";
    // A string named as 'sp'
    sp="         ";

    // Outer For loop
    for(count=1; count<=10; count++ ){
        cout<<sp;                           // Printing variable 'sp'

        // Inner For loop
        for(i=1;i<=count;i++)
            cout<< str.substr(0,1);         // Printing 'str' string character from index '0' to '1'
        
        cout<<endl;                         // For empty line
    k--;                                    // Minus k
    sp=sp.substr(0,k);                      // storing 'sp' string character from index '0' to 'k'
    }

// Returning 0 to main()
return 0;
}

