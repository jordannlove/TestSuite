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

  std::cout << "checkSearch: ";
  if(checkSearch() == true)
  {
    std::cout << "passed\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }

  std::cout << "removeFromBack: ";
  if(removeFromBack() == true)
  {
    std::cout << "passed\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }

  std::cout << "removeFromFront: ";
  if(removeFromFront() == true)
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
  bool test2;
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

  //check that addFront handles addition of 20 items
  for(int x = 0; x < 20; x++)
  {
    list.addFront(x);
  }
  if(list.size() == 20)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
    return (test2);
  }

  return(test1 && test2);
}


bool Test::addToBack()
{
  bool test1;
  bool test2;
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

  //check that addBack handles addition of 20 items
  for(int x = 0; x < 20; x++)
  {
    list.addBack(x);
  }
  if(list.size() == 20)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
    return (test2);
  }

  return(test1 && test2);
}


bool Test::checkSearch()
{
  bool test1 = true;
  bool test2;
  LinkedListOfInts list;

  //verify that search returns false on empty list
  for(int x = -10; x <= 10; x++)
  {
    if(list.search(x) == true)
    {
      test1 = false;
    }
  }

  //verify that search returns false on incorrect data type
  if(list.search(7.1234) == true)
  {
    test2 = false;
  }
  else
  {
    test2 = true;
  }

  return(test1 && test2);
}


bool Test::removeFromBack()
{
  bool test1;
  bool test2;
  LinkedListOfInts list;

  //check that empty list returns false
  if(list.removeBack() == true)
  {
    test1 = false;
  }
  else
  {
    test1 = true;
  }

  //check that removeBack handles size with one removal
  for(int x = 0; x < 5; x++)
  {
    list.addFront(x);
  }
  list.removeBack();
  if(list.size() == 4)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
    return (test2);
  }

  return(test1 && test2);
}


bool Test::removeFromFront()
{
  bool test1;
  bool test2;
  LinkedListOfInts list;

  //check that empty list returns false
  if(list.removeFront() == true)
  {
    test1 = false;
  }
  else
  {
    test1 = true;
  }

  //check that removeFront handles size with one removal
  for(int x = 0; x < 5; x++)
  {
    list.addFront(x);
  }
  list.removeFront();
  if(list.size() == 4)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
    return (test2);
  }

  return(test1);
}
