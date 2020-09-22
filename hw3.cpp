/****
* PSEUDOCODE:
* Reverse Array Function
*  if length < 2 return
*    make pointer 1 = to arr
*    make pointer 2 = arr + length - 1
*  while loop pointer1 < pointer 2
*    make temp pointer = pointer 2
*    pointer 2 = pointer 1
*    pointer 1 = temp pointer
*    ++ pointer 1
*    -- pointer 2
********************************************
*  HasBalancedParentheses Function
*  int count = 0
*  if statement == ')'
*    return false
*  for loop. i less than statement1.length
*    if statement[i] == '('
*    count ++
*  else if statement1[i] == ')'
*    count --
*  if count == 0 return true 
*  else return false
********************************************
*  DogIsHelper Function
*  if word == "" return false
*  if word[0] == letter return true
*  return DogishHelper
*  else return DogishHelper
*********************************************
*  InDogish Function
*  if loop DogishHelper letter 'd'
*    string temp = letter find 'd'
*  if loop DogishHelper letter 'o'
*    string temp = letter find 'o'
*  if loop DogishHelper letter 'g'
*    string temp = letter find 'g'
*   return true
********************************************
*  InXish Function
*  if word.length == 0 return true
*  else if text.length == 0 return false
*  else if text == word return InXish  
****/
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

bool InXish (string text, string word) {
  if (word.length() == 0)
    return true;
  else if (text.length() == 0)
    return false;
  else if (text[0] == word[0])
    return InXish(text.substr(1), word.substr(1));
  return InXish(text.substr(1), word.substr(0));
}

  /*int aux[length];

  for(int i = 0; i < length; i++) {
    aux[length - 1 - i] = arr[i];
  }
  for(int i = 0; i < length; i++) {
    arr[i] = aux[i];
  }
  */


