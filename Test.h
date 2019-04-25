/*Executive: run program, present user with menu, setters and getters,
exit program*/

#ifndef TEST_H
#define TEST_H
#include <string>
#include <iostream>

#include "LinkedListOfInts.h"

class Test
{
public:
  //constructor
  Test();

  //methods
  void runTests();

private:
  bool emptyList();
  bool addToFront();
  bool addToBack();

};

#endif
