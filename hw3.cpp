/****
* PSEUDOCODE:
*
*/
#include <iostream>
using namespace std;


void ReverseArray(int arr[], int length) {
  if (length<2)
    return;
  int *pb = arr;
  int *pe = arr + length -1;

  while (pb < pe) {
    int tmp = *pe;
    *pe = *pb;
    *pb = tmp;
    ++pb;
    --pe;
  }
  /*int aux[length];

  for(int i = 0; i < length; i++) {
    aux[length - 1 - i] = arr[i];
  }
  for(int i = 0; i < length; i++) {
    arr[i] = aux[i];
  }
  */
}

/*
bool DogishHelper( std::string word, char letter){
 if(word == "") {
 return false;
    }
    std::cout << word << std::endl;
 if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
 
    } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
}*/