// Including header file in my program.
#include <iostream>

// Using the namespace named std.
using namespace std;

int main()
{
    // Integer type variables    
    int count,i;

    // string type variable
    string str,sp;

    // A string named as 'str'
    str = "**********";
    
    // A string named as 'sp'
    sp=" ";

    // Outer For loop
    for(count=10; count>=1; count-- ){
        cout<<sp;       // Printing string variable 'sp'

        // Innner For loop
        for(i=1;i<=count;i++)
            cout<< str.substr(0,1);    // Printing 'str' string character from index '0' to '1'
        sp+=" ";                       // Plus 'sp' variable
        cout<<endl;                    // For empty  line

    }

// Returning 0 to main()
return 0;
}
