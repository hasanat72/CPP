/* Name: Md Ashikur Rahman
 * StudentID: 1458653
 * Description: Hangman Game
 * Copyright 2019 Md Ashikur Rahman
 */

#ifndef WORDGAME_H
#define WORDGAME_H

#include <iostream>
using std::string;

const unsigned int DSIZE = 28;
const char d[][DSIZE] = {"astronaut", "spaceship", "planetary", "village",
                       "intergalactic", "equador", "equilibrium", "equivalent",
                       "procrastrinate", "equestrian", "astronomic",
                       "affective", "assessment", "stableboy", "variable",
                       "applesauce", "sufficient", "ventriloquist", "basement",
                       "basically", "bedazzled", "bandaged", "cumbersome",
                       "canteloupe", "critical", "castaway", "compasses",
                       "compassing"};

class WordGame {
 public:
  WordGame() {
    for ( unsigned int i = 0; i < DSIZE; i++ ) {
      dictionary[i] = d[i];
    }
  }
  // virtual destructor
  virtual ~WordGame() { }
  int get_size() const {
    // returns the size of the dictionary
    return DSIZE;
  }

 protected:
  string dictionary[DSIZE];
};


#endif  // WORDGAME_H

