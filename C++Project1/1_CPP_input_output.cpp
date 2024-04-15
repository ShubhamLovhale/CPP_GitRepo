#include<iostream>
#include<string>
using namespace std;

int main()
{
	string Name; // Declaration of variable
	int age; // Declaration of variable
	cout << "Please enter your name" << endl;
	//cin >> Name;
	getline(cin, Name);
	cout << "Hello " << Name << endl;
	cout << "Please enter your age" << endl;
	cin >> age;
	//cout << "Your age is " << age << endl;
	cout << "Age of " << Name << " is " << age << endl; // sttring concatenation

}
