// CPP_Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;  // Semicolon in CPP is used to end the statement.

int main()
{
    int x = 20, y = 5, z;
    // Types of operators in C++
 
    // 1. Arithmatic operators 
    // Variable = Value to be soterd in variable -- 15,497, X+Y = 25 ---  Z = 25
    // Addition + 
    z = x + y; // z = 25
    cout << "Value of z is " << z << endl;

    // Substraction -  
    z = x - y; // z = 15
    cout << "Value of z is " << z << endl;

    // Multiplication * 
    z = x * y; // z = 100
    cout << "Value of z is " << z << endl;

    // Division / 
    z = x / y; // z = 4
    cout << "Value of z is " << z << endl;
                  
    //  Modulus % (Returns the division remainders)
    z = x % y; // z = 0
    cout << "Value of z is " << z << endl;

    // Increment ++ (Increments the value by 1)
    x = x++; // Now value of x = 21
    z = x; // z = 21
    cout << "Value of z is " << z << endl;

    // Decrement -- (Decrease the value by 1)
    y = y--; // Now value of y = 4
    z = y; // z = 4
    z = y--; // z = 3
    cout << "Value of y is " << z << endl;
    cout << "Value of z is " << z << endl;

    // 2. Assignment operators =

    // Basic assignment operator
    z = x; // Assigns the value of x in z // z = 21
    cout << "Value of z is " << z << endl;

    // Addition assignment
    int a = 30;
    a += 5; // a = 35
    cout << "Value of a is " << a << endl;

    // substraction assignment
    a -= 5; // a = 30 
    cout << "Value of a is " << a << endl;

    // Multiplication assignment
    a *= 5; // a = 150
    cout << "Value of a is " << a << endl;

    // Division assignment assignment
    a /= 5; // a = 30
    cout << "Value of a is " << a << endl;
   
    // 3. Comparision operators
    
    // Result of comparison operators will true (1) or false (0)
    int b = 5, c = 3;
    
    // 1. Equal to ==
    cout << (b == c) << endl; // checks if b is equal to c

    cout << (b != c) << endl; // checks if b is not equal to c

    cout << (b > c) << endl; // checks if b is greater than c

    cout << (b < c) << endl; // checks if b is less than c

    cout << (b <= c) << endl; // checks if b is less than or equal to c 
                              // 1. b is less than c or 2. b is equal to c ( for "or" condition, at leat one should be true )

    cout << (b >= c) << endl; // checks if b is greater than or equal to c
                              // 1. b is greater than c or 2. b is equal to c ( for "or" condition, at leat one should be true )


    // 4. logical operators
    // 5. Bitwise operators
 
}

