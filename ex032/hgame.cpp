/* Name: Md Ashikur Rahman
 * StudentID: 1458653
 * Description: Hangman Game
 * Copyright 2019 Md Ashikur Rahman
 */

#include <cstdlib>
#include <ctime>
#include "hgame.h"

using std::cout;
using std::cin;
using std::endl;

HGame::HGame() {
  // for creating (runtime) different sequence of random numbers
  srand(time(NULL));
  // setting 0 to 28 any random value
  int n = rand() % (get_size() + 1);
  // picking any random word from dictionary array
  myWord = dictionary[n];
  // setting default number of wrong tries to zero
  maxTries = 0;
  // setting default number of initial match to zero
  match = 0;
}

// returns length of the guessing word
unsigned int HGame::myWordSize() {
  return myWord.size();
}

// returns maximum number of wrong input
unsigned int HGame::getTries() {
  bool same;
  unsigned int count = 0;
  for ( unsigned int i = 0; i < myWordSize(); i++ ) {
       same = false;
       for ( unsigned int j = 0; j < i; j++ ) {
          // matching number of unique characters
          if (myWord[j] == myWord[i]) {
            same = true;
            break;
          }
       }
       if (!same) {
         // if does not match then increment the counter
         count++;
       }
  }
  // 3 more tries are possible than the number of unique characters
  maxTries = count + 3;
  // suppose if the length of word is 5 and number of unique
  // characters are 4, then the function should return 7
  return maxTries;
}

// user input of the character
void HGame::input() {
  cin >> letter;
}

// return number dashes
// displays all the characters from c[10]
int HGame::reveal(char c[10]) {
  // storing number of matched character
  for ( unsigned int i = 0; i < myWordSize(); i++ ) {
    if (myWord[i] == letter) {
      c[i] = letter;
      // increment of the matched word
      match++;
    }
  }
  // displaying the current set of characters
  for ( unsigned int i = 0; i < myWord.size(); i++ ) {
    cout << c[i];
  }
  // returning number of remaining dashes '-'
  return (myWordSize() - match);
}
// destructor
HGame::~HGame() {
}
void HGame::myWordPrint(){
    cout<<myWord<<endl;
}

