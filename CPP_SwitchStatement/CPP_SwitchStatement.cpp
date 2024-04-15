#include<iostream>
#include<string>
using namespace std;



void Calculator(int x, int y)  // Using Switch case or switch statements
{
	char Operation = NULL;  // +, -, /, *
	

	cout << "Please Enter the operation type from +, -, /, *" << endl;
	cin >> Operation;

	bool isOperationSuitable = false; // Boolean variable 

	if (Operation == '+' || Operation == '-' || Operation == '/' || Operation == '*')
	{
		isOperationSuitable = true;
	}

	else
	{
		cout << "Invalid operator value entered!" << endl;
	   
	}



	if (isOperationSuitable)
	{
		switch (Operation)
		{
			case '+':
				cout << x + y << endl;
				break; // break is used to stop the further execution of loop

			case '-':
				cout << x - y << endl;
				break;

			case '/':
				cout << x / y << endl;
				break;

			case '*':
				cout << x * y << endl;
				break;

			default:
				break;


		}
	}

	
}



int main()
{

	int x = 0;
	int y = 0;
	string UserResponse = ""; // THis is string and string is char array.
	RestartCalculator:    // This is label for goto statement
	cout << "Starting Calculator" << endl;
	//labelgetnumbers:
	cout << "please enter 2 numbers" << endl;
	//bool isint = true;
	cin >> x;
	cin >> y;
	

	
	if (isdigit(x) && isdigit(y))
	{
		
		Calculator(x, y);
		
	}

	else
	{
		cout<<"Invalid input for numbers. Exiting calculators" << endl;
		
		return 0;
		
	}
	

	cout << "do you want to use the calculator again ?" << endl;
	cin >> UserResponse; // yes -- Y
	//string Converted = ""; // YES
	
	for (int i = 0; i < UserResponse.length(); i++)
	{
		char u = UserResponse[i]; // Y
		
		UserResponse[i] = toupper(u);  //Y converting u into uppercase and storing in 'i'th index of converted string
	}
	
	
	
	if (UserResponse == "YES")
	{
		goto RestartCalculator; // goto is the jump statement used send controller to particular line define with label:
	}

	else if (UserResponse == "NO")
	{
		cout << "Closing Calculator, Thanks for using our Calculator!" << endl;
	}
	
	else
	{
		cout<<"Invalid Input Enterd by user, closing the calculator, please restart calculator to use again" << endl;
	}

	return 0;
}