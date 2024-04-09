
#include <iostream>
using namespace std;

void FilterArray(string Firstarray[5])
{
	//int sizeofarray = Firstarray->size();

	string Secondarray[5]; // array declaration

	//Secondarray[0] = Firstarray[0];
	//Secondarray[1] = Firstarray[1];
	//Secondarray[2] = Firstarray[2];
	//Secondarray[3] = Firstarray[3];
	//Secondarray[4] = Firstarray[4];



	for (int i = 0; i < 5; i++)
	{
		string Name = Firstarray[i];
		//tolower(Name);

		bool XyZ = Name.find("P") != -1;

		if (XyZ) //xyz = true
		{
			Secondarray[i] = Firstarray[i];
		}
		//Secondarray[i] = Firstarray[i];
		cout << Secondarray[i] << endl;
	}
	
	
}

int main()
{

	string MyArray[5] = { "Prathmesh", "Mahesh", "Tejas","Pratik","Shubham"};
	
	// Arrayname stores the address of first element of array - means array name is the pointer.
	//cout << *MyArray << endl;

	FilterArray(MyArray); // Calling the function


    // Array is the collection of similar data type items.
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

	//string Name[5]; // Declaration of array  

	//Name[0] = "Prathmesh"; // set value at 0 index.
	//Name[1] = "Shubham"; 
	//Name[2] = "Pratik";
	//Name[3] = "Tejas";
	//Name[4] = "Mahesh";

	//int SizeOfNameArray = 0;
	//SizeOfNameArray = size(Name);
}
