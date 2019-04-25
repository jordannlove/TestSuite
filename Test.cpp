/*Executive: present user with menu, facilitate file reading*/

#include <iostream>
#include <fstream>
#include <string>

#include "Test.h"
//#include "CourseInfo.h"


/////////////
//Constructor
Test::Test()
{

}

void Test::runTests()
{
  std::cout << "emptyList: ";
  if(emptyList() == true)
  {
    std::cout << "passed\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }

  std::cout << "addToFront: ";
  if(addToFront() == true)
  {
    std::cout << "passed\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }

  std::cout << "addToBack: ";
  if(addToBack() == true)
  {
    std::cout << "passed\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}


bool Test::emptyList()
{
  bool test1;
  LinkedListOfInts list;

  //see if list begins as empty and size is zero
  if( list.isEmpty() && (list.size() == 0) )
  {
    test1 = true;
  }
  else
  {
    test1 = false;
  }

  return(test1);
}


bool Test::addToFront()
{
  bool test1;
  LinkedListOfInts list;

  //see if size increments with one addFront
  list.addFront(12);
  if( list.size() == 1 )
  {
    test1 = true;
  }
  else
  {
    test1 = false;
  }

  return(test1);
}


bool Test::addToBack()
{
  bool test1;
  LinkedListOfInts list;

  //see if size increments with one addFront
  list.addBack(12);
  if( list.size() == 1 )
  {
    test1 = true;
  }
  else
  {
    test1 = false;
  }

  return(test1);
}
