/****
* PSEUDOCODE:
*
*/
#include <iostream>
#include <string>
using namespace std;

void ReverseArray(int arr[], int length) {
  if (length<2)
    return;
  int *ptr1 = arr;
  int *ptr2 = arr + length -1;

  while (ptr1 < ptr2) {
    int tmp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = tmp;
    ++ptr1;
    --ptr2;
  }
}

bool HasBalancedParentheses(string statement1) {
  int count = 0;
  if (statement1[0] == ')') 
    return false;
  for (int i = 0; i < statement1.length(); i++) {
    if (statement1[i] == '(')
      count ++;
    else if (statement1[i] == ')')
      count --;
  }
  if (count == 0)
    return true;
  else
    return false;
}


bool DogishHelper( std::string word, char letter){
 if(word == "") {
 return false;
    }
    std::cout << word << std::endl;
 if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
    return true;
    return DogishHelper (word.substr(1,word.length()),letter);
    } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
  return 0;
}

bool InDogish(string letter) {
  if(DogishHelper (letter,'d')) {
    string temp = letter.substr(letter.find('d'));
    if (DogishHelper(temp, 'o')) {
      temp = temp.substr(temp.find('o'));
        if (DogishHelper(temp, 'g')){
          return true;
        }      
    }
  }
  return false;
}



  /*int aux[length];

  for(int i = 0; i < length; i++) {
    aux[length - 1 - i] = arr[i];
  }
  for(int i = 0; i < length; i++) {
    arr[i] = aux[i];
  }
  */


