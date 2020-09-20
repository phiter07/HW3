#include <iostream>
//#include "hw3.cpp"
#include "hw3.h"

using namespace std;

int main() {
  //Test ReverseArray();

  //std::cout << DogishHelper("gadgdks",'d') << std::endl;
  int arr[] = { 1, 2, 3, 4, 5 };
  int n = sizeof(arr)/sizeof(arr[0]);
  int array_length = 5;

  ReverseArray(arr, n);
  
  return 0;
  
/*
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
*/

}
/*
//Test HasBalancedParentheses();
 std::string statement1 = "((())())";
 If(HasBalancedParentheses(statement1)){
   	std::cout << "Is it Ballanced: " << std:endl;
 }

// Test InDogish();
 std::string mydogs = "dpoags";
 If(InDogish(mydogs)){
   	std::cout << "Part of Dogish? " << std:endl;
 }

 // Test bool InXish(sting mytext, sting myword);

*/



