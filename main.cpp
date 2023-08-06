#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	cout << "Welcome to the Adventure 1. Would you like to play?" << endl;
	cout << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "Select a number: ";

	cin >> choice;

	if (choice == 1)
	{
		cout << "Great! Let's get started.";
			
		return 0;
	}

	if (choice == 2) {

		cout << "Alright. See ya!" << endl; 
		return 0;
	}
}
