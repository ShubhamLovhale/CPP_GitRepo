
#include <iostream>
using namespace std;

int main()
{
	//int age = 15;

	//if (age > 18) // this is condition, no need of ;
	//{
	//	cout << "you are eligible for diriving license" << endl;

	//}

	//else // else statement will be executed when if statement is false
	//{
	//	cout << "You are not eligible for driving license" << endl;
	//}

	int marks = 75;
	// datatype Variablename = value stored in variable

	if (marks <= 75) //(75 < 75) or (75 = 75)
	{
		cout << "Congratulations, you are passed with first class" << endl;

	}

	else
	{
		cout << "Congratulations you are passed with Distinction" << endl;

	}

	string day = "Wednesday";

	if (day == "Thursaday") // == Double equals to sign is used to compare 
	{
		cout << "Fasting";
	}

	else if (day == "Saturday")
	{
		cout << "Holiday";
	}
	
	else if (day == "Monday")
	{
		cout << "Working Day";
	}
	
	else
	{
		cout << "Good Day";
	}

	int x = 15;
	int y = 20;

	if (x > y) // when x is greater than y (15 > 20) - false
	{
		cout << "x is greater than y";
	}

	else if (x == y) // when x = y (15 = 20) - false
	{
		cout << "x is equals to y";
	}

	else //  x < y
	{
		cout << "x is less than y";
	}
	



}

