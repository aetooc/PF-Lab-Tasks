// Including header file in my program.
#include<iostream>

// Using the namespace named std.
using namespace std;

int main(){

	// Integer variables
	int val,i=1,sum=0;

	// Printing variables
	cout<<"Please Enter a Number:";

	// Asking Input from user and storing it in 'val'
	cin>> val;

	// If statement
	if (val>0 && val<=1000){
		cout<<endl;			// Printing an empty line
		// For loop
		for (i;i<val;i++){

			// If statement
			if(val%i==0){
				cout<<i<<endl;		// Printing i 
				sum+=i;				// Adding i in varaibel 'sum'
				}
		}

		// If statement
		if (sum==val)

			// Printing a string
			cout<<endl<<"It's a Perfect Number."<<endl;

		// else statement
		else 
		    // Printing a string
			cout<<endl<<"It's not a Perfect Number."<<endl;
	}

	// else statement
	else 
		cout<<endl<<"Please choose a Number between 1 to 1000"<<endl;

// Printing a string
return 0;
}