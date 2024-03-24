
#include <iostream>
using namespace std;

int main()
{
    //int x = 20; // declaration and intialisation of variable x.
   
    //// Declaration means giving name to variable
    //// intialisation means assigning value to variable
    ////string City; // Declaration
    ////City = "Mumbai";
    ////string& RefofCity = City; // Refofcity is reference variable of actual variable City.
 
    //// Reference variables:
    //// Reference variable is denoted by & symbol. // ex int &p; // p is reference variable
    //// & operator used to create refernce variable
    //// & operator can also be used to get memory address of variable
    //// Reference variable points towards the another memory location which hold the value.
    //// y is reference variable of x, means y points towards the memory location of x.
    //// y is just another name of x, it will have the same value as x.
    ////int& x = x;
    //int &y = x; // y this is reference variable of x // reference variable is just another name of actual variable
    //            // y is the address of y or x


    //cout << "Value of x is: " << x << endl; // Printing value of x
    //cout << "Address of x is: " << &x << endl; // printing address of x
    //cout << "Value of y is: " << y << endl; // Printing value of y
    //cout << "Address of y is: " << &y << endl; // printing address of y

    ///*value of x and y is same because both are same thing only, with different names.*/
    //// --------------------------------------------------------------------------------------------------------
    //
    
    // Pointer variable:
    // Pointer variable is denoted by * symbol
    // pointer varible stores the adddress of variable in memory location
    // pointer variable has its own name

    int p = 56; // declaration and initalisation of variable
          

    int* a = &p; // a is the pointer variable of actual variable p.
                 // pointer variabel a stores the address of p.
  

    cout <<"value of a is :" << a << endl;  // printing a -- result = address of p
    cout <<"value stored at address of p " << *a << endl; // printing value stored at address of p

 
    //int* z = &x; // z is pointer variable of x  
    //
    //cout << "Address of y is : " << &y << endl;
    //cout << "Address of x is : " << &x << endl;
    //cout << "value stored in z : " << z << endl;
    ////cout << "Address of z is : " << &z << endl;
    //cout << "value of z is : " << *z << endl;


}

