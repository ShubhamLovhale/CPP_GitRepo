
#include <iostream>
using namespace std;

int main()
{
 //   // Array is the collection of similar data type items.
	//// Index of array elements starts from 0.
	//// size of array = index of last element + 1.

	//int arr[3] = { 45, 5, 10 }; // Array declaration with initialisation

	////cout << "First element of array is :" << arr[0] << endl;
	////cout << "Second element of array is :" << arr[1] << endl;
	////cout << "Third element of array is :" << arr[2] << endl;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "Element " << i+1 << " is : " << arr[i] << endl;
	//}

	///*for (size_t i = 0; i < length; i++)
	//{

	//}*/

	string Name[5]; // Declaration of array  

	Name[0] = "Prathmesh"; // set value at 0 index.
	Name[1] = "Shubham"; 
	Name[2] = "Pratik";
	Name[3] = "Tejas";
	Name[4] = "Mahesh";

	int SizeOfNameArray = 0;
	SizeOfNameArray = size(Name);
}
