
/* Name: Md Ashikur Rahman
 * StudentID: 1458653
 * Description: Hangman Game
 * Copyright 2019 Md Ashikur Rahman
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "hgame.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  // until 20 characters of array are allowed because
  // no words in the string are more than 20 characters long
  char c[20];
  // remaining number of dashes
  int numberOfDashes;
  // initializing hgame object
  HGame hgame;
  // default text for displaying game result
  hgame.myWordPrint();
  string message = "Ooops! You lost.";
  // default string with all the dashes
  for ( unsigned int i = 0; i < hgame.myWordSize(); i++ ) {
    // filling all the characters with default '-'
    c[i] = '-';
  }
  // Number of allowed attempts = number of unique characters in the word + 3
  unsigned int numberOfTries = hgame.getTries();
  cout << "Please guess the word within " << numberOfTries << " tries." << endl;
  // loop until the number of attempts less than number of the
  // unique characters in the randomly selected word + 3
  for ( unsigned int i = 0; i < numberOfTries; i++ ) {
    cout << "Guess the word: ";
    // fetching number of remaining dashes
    numberOfDashes = hgame.reveal(c);
    if (numberOfDashes == 0) {
      // success message if numbers of remaining dashes are 0
      message = ", Congratulations, you won.";
      break;
    } else {
      // if numbers of remaining dashes are not 0 then insert
      cout << ", Insert secret character: ";
      cin>>hgame.letter;
    }
  }
  // printing 'win' or 'lost' message
  cout << message << endl << endl;

  return 0;
}

