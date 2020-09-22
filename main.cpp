#include <iostream>

//#include "hw3.cpp"
#include "hw3.h"

using namespace std;

int main() {
	// Test ReverseArray();

	// std::cout << DogishHelper("gadgdks",'d') << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int array_length = 5;

	ReverseArray(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	std::cout << std::endl;
	std::cout << " -------------NEW TEST------------- " << endl;

	// Test HasBalancedParentheses();
	std::string statement1 = "((())())";
	if (HasBalancedParentheses(statement1)) {
		std::cout << "It is Balanced " << endl;
	} else {
		std::cout << "It is Not Balanced " << endl;
	}

	std::cout << " -------------NEW TEST------------- " << endl;

	// Test InDogish();
	std::string mydogs = "dpoags";
	if (InDogish(mydogs)) {
		std::cout << "Part of Dogish? " << endl;
		std::cout << "It is dogish" << endl;
	} else {
		std::cout << "It is not dogish" << endl;
	}

	std::cout << " -------------NEW TEST------------- " << endl;

	// Test bool InXish(sting mytext, sting myword);
	string mytext = "kwedcelkfatyyrse";
	string word = "cat";

	if (InXish(mytext, word)) {
		std::cout << "It's in " << word << "ish" << endl;
	} else {
		std::cout << "It's not in " << word << "ish" << endl;
	}
}
