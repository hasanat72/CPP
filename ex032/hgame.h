/* Name: Md Ashikur Rahman
 * StudentID: 1458653
 * Description: Hangman Game
 * Copyright 2019 Md Ashikur Rahman
 */

#ifndef HGAME_H
#define HGAME_H

#include "wordgame.h"

using std::string;

class HGame : public WordGame {
 private:
  string myWord;
  // number of wrong tries
  unsigned int maxTries;
  // number of matches of the characters
  int match;
  // character to be inserted
  //char letter;

 public:
  // constructor for choosing a random word
  // and setting default values
  // character to be inserted
  char letter;
  HGame();
  // returns length of the guessing word
  unsigned int myWordSize();
  // returns the maximum allowed number of wrong input
  unsigned int getTries();
  // user input of the character
  void myWordPrint();
  void input();
  // return number dashes
  // displays all the characters from c[10]
  int reveal(char c[10]);
  // destructor
  ~HGame();
};

#endif  // HGAME_H

