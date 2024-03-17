// C++_Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Addition(); // User defined Function should be declared before main function.
string GetName();

string Surname; // This is Gloabal variable because its declared outside of the function.
bool isGlobal; // This is Gloabal variable because its declared outside of the function.

int main() // Main function is the entry point of program.
{
    // Variable is the container which is used to store the data.
    // When we declare the variable, compiler assignes name to the specific memory location which containns the data.
    // Variable is always declared with datatype.
    // Type of Variable : 
    // 1) Local variables : Declared inside the function, Compiler Will be given more preference to local varibale.
    //                      age, isadult, NumberF, NumberD, Mycharacter1, Name -- 
    //                      -- these are loacl variables because these are declared inside the function
    // .
    // 2) Global variable : Declare outside the function
    // 
    // 3) Variable as function parameter : Declare as the parameters of function

    
    // Datatypes :
    // Basic or Native datatypes : No additional library addition is required 
    int standard;
    // int datatype stores the whole number, without decimals.    
    int age; // Default value will be 0 or any other value it can store.  
    ///int age = 0; // Default value will be 0 --- Preferred.
    age = 29; // value of age will be changed to 29 from 0.
  
    // boolean data type
    // it can accomodate data upto 1 bytes.
    // true = 1, false = 0.
    bool isAdult; // Variable declaration // Default value will be false; 
    isAdult = true; // Assignemnet 

    // double datatype
    // double datatype is used to store numbers in decimals
    // it can accomodate data upto 8 bytes.
    // Double is more preferred than Float.
    // Double can store upto 15 decimals. ex - 1.005008002.. upto 15 decimals
    // float can accomodate six or seven decimal digits, while double variables can accomodate 15 digits.
    float NumberF;
    double NumberD; 

    // Char datatype
    // Stores a single character/letter/number, or ASCII values
    char Mycharacter1; // stores characters ex. a, s,$ etc.    "$4#as" -- This is string 

    // Specific Data Types

    // String data type
    // The string type is used to store a sequence of characters(text). 
    // It Can be single or collection of characters.
    // Default value will be " ".
    // String values must be surrounded by double quotes " "
    string Name; // Declaration of string variable
    string Surname;
}

int Addition()
{
    // local variables : X, Y, Z, U
    int X = 0; // Declaration of single variable
    int Y, Z, U; // deeclaration of multiple variable.
    
    return X;
}

string GetName()
{
    string Address = "";
    // Do something.....
    return Address;
}
