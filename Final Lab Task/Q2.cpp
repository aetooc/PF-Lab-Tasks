// Including header file in my program.
#include<iostream>

// Using the namespace named std.
using namespace std;

int main(){
	// Integer variables
	int day, month, year,sum=0;

	// charachter 'ch'
    char ch;

	// Printing a string
	cout << "Enter a date(mm-dd-yyyy) : ";

        cin >> month;		// Asking Input from user and storing it in 'month' 
        cin >> ch;			// Asking Input from user and storing it in 'ch' 
        cin >> day;			// Asking Input from user and storing it in 'day' 
        cin >> ch;			// Asking Input from user and storing it in 'ch' 
        cin >> year;		// Asking Input from user and storing it in 'year' 

	// Integer array named as 'months'
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	// If statement.
	if((year%400==0) || (year%4==0 && year%100!=0))
			months[1]=29;		// Rewriting value of array months[1] to 29

	// For loop
	for(int i=0;i<month-1;i++)
	{
		sum+=months[i];		// Adding months[i] value to sum
	}
	// Adding day value to sum
	sum+=day;

	// If statement
	if(months[1]==29)
		cout<<endl<<year<<" is a leap year."<<endl;		// Printing a string
	
	// else statement
	else
		cout<<endl<<year<<" is not a leap year"<<endl;  // Printing a string

	// Printing a string
	cout<<endl<<"Number of Days: "<<sum<<endl;
	
// Returning value to main()
return 0;
}