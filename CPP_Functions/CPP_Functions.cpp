#include <iostream>
using namespace std;

    // Datatype VariableName = Value ----- Variable Structure

	// Function 
	// Function is block of code which only executes when called

	// Functions are of two types:
	// 1. Library Functions
	// 2. User Defined Functions

	// User Defined Functions: are created by users to avoide repitative coding.

	// Structure of functions

	// ReturnType FunctionName()
	// {
	//    Do Something....
	//    This is block of code / body of the function
	// } 

	// Return types can be: 
	// 1. Void -- (it will return nothing, just execute the block of code)
	// 2. Datatypes -- (int, bool, char, string, array.....)



// ReturnType FunctionName()
void PrintMyName()
{
	cout << "My Name is Prathmesh" << endl;
	int count; // decalration of local variable
}

void GetandPrintName(string Name) // Declaring Name variable as function parameter
{
	// string Name = ""; // intialisation of variable

	// cout << "Please enter your name : " << endl;

	// cin >> Name; // will take value from user and store in string Name

	cout << "Hello " << Name << endl;
	
}

// returntype functionname()
int Addition(int x, int y)
{ 
	/*int x;
	int y;*/
	
	int z; // variable name declaration
	z = x + y; // initialisation


	return z;

}

int Multiplication(int x, int z)
{
	
	int y = x * z; 

	return y;

}


int main()
{
	// PrintMyName();
	// string Name = "Shubham"; //name is local variable
	// GetandPrintName(Name); // calling the user defined variable

	// variable is used to store data / values.
	// variable structure :
	// datatype variablename = value // initalisation
	
	
	int u = Addition(25, 30); //u = 55
	//cout << result << endl;


	int v = Multiplication(5, 2); // calling the fuction  // v = 10

	GetandPrintName("Aurangabad");


	return 0;
}