#ifndef ROLLS_H
#define ROLLS_H

#include <cstdlib>
//include <ctime>

int rollNum(int a, int b){
  int r;
  r = rand() % a + b;
  return r;
}

#endif
