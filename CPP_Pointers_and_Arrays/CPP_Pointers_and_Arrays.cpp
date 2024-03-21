
#include <iostream>
using namespace std;

int main()
{
    int x = 20; // declaration and intialisation of variable x.
    // Declaration means giving name to variable
    // intialisation means assigning value to variable
 
    // Reference variables:
    // Reference variable is denoted by & symbol. // ex int &p; // p is reference variable
    // & symbol represents address of variable in memory location
    // Reference variable points towards the another memory location which hold the value.
    // y is reference variable of x, means y points towards the memory location of x.
    // y is just another name of x, it will have the same value as x.

    int &y = x; // y this is reference variable of x // reference variable is just another name of actual variable
    int p; // declaration of variable

    cout << "Value of x is: " << x << endl; // Printing value of x
    cout << "Value of y is: " << y << endl; // printing value of y

     /*value of x and y is same because both are same thing only, with different names.*/

    // Pointer variable:
    // Pointer variable is denoted by * symbol
    // pointer varible stores the adddress of variable in memory location

    int* a; // a is pointer variabl // declarration of pointer variable a
    a = &p; // stores the address of p (same data type variable) // initialisation ...
 
    int* z = &x; // z is pointer variable of x  
    
    cout << "Address of y is : " << &y << endl;
    cout << "Address of x is : " << &x << endl;
    cout << "value stored in z : " << z << endl;
    //cout << "Address of z is : " << &z << endl;
    cout << "value of z is : " << *z << endl;


}

