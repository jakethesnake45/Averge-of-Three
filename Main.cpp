#include <iostream>
using namespace std; 

int main()
{

	double num1; 
	double num2; 
	double num3;
	double average;

	cout << "Please enter a real number!" << endl;
	cin >> num1;

	cout << "Please enter a second number" << endl;
	cin >> num2;

	cout << "Please enter in the final number" << endl; 
	cin >> num3; 

	average = (num1 + num2 + num3) / 3;

	cout << "The average is " << average << endl; 




	return 0; 
}