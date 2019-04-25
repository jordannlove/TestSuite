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

  std::cout << "checkSize: ";
  if(checkSize() == true)
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

//////////////
//test methods

//////////////////////
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


//////////////////////
bool Test::checkSize()
{
  bool test1;
  bool test2;
  bool test3;
  LinkedListOfInts list1;
  LinkedListOfInts list2;
  LinkedListOfInts list3;

  //see if list size is correct after adding/removing one item from front
  list1.addFront(1);
  list1.removeFront();
  if(list1.size() == 0)
  {
    test1 = true;
  }
  else
  {
    test1 = false;
  }

  //see if list size is correct after adding/removing one item from back
  list2.addBack(1);
  list2.removeBack();
  if(list2.size() == 0)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
  }

  //check that empty list has size zero
  if( list3.isEmpty() && (list3.size() == 0) )
  {
    test3 = true;
  }
  else
  {
    test3 = false;
  }

  return(test1 && test2 && test3);
}


///////////////////////
bool Test::addToFront()
{
  bool test1;
  bool test2;
  bool test3;
  LinkedListOfInts list1;
  LinkedListOfInts list2;
  LinkedListOfInts list3;

  //see if size increments with one addFront
  list1.addFront(12);
  if( list1.size() == 1 )
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
    list2.addFront(x);
  }
  if(list2.size() == 20)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
  }

  //check that addFront actually adds items
  list3.addFront(17);
  if(list3.search(17) == true)
  {
    test3 = true;
  }
  else
  {
    test3 = false;
  }

  return(test1 && test2 && test3);
}


//////////////////////
bool Test::addToBack()
{
  bool test1;
  bool test2;
  bool test3;
  LinkedListOfInts list1;
  LinkedListOfInts list2;
  LinkedListOfInts list3;

  //see if size increments with one addFront
  list1.addBack(12);
  if( list1.size() == 1 )
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
    list2.addBack(x);
  }
  if(list2.size() == 20)
  {
    test2 = true;
  }
  else
  {
    test2 = false;
  }

  //check that addBack actually adds items
  list3.addBack(17);
  if(list3.search(17) == true)
  {
    test3 = true;
  }
  else
  {
    test3 = false;
  }

  return(test1 && test2 && test3);
}


///////////////////////
bool Test::checkSearch()
{
  bool test1 = true;
  bool test2;
  bool test3;
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

  //verify that search returns true on item in list
  list.addFront(18);
  if(list.search(18) == true)
  {
    test3 = true;
  }
  else
  {
    test3 = false;
  }

  return(test1 && test2 && test3);
}


//////////////////////////
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


///////////////////////////
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

  return(test1 && test2);
}
