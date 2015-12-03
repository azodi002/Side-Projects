/*
Compiler: g++
How to Compile: g++ ArgumentHelloWorld.cpp
How to run: ./a.out HelloWorld

Goal of Program: User enters one word from command line and prints to screen
What I learned: How to use main parameters
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  if(argc < 2)
    {

      cout << "***********************" <<endl;
      cout << "Error, aborting program" << endl;
      cout << "***********************" << endl;
      abort();
    }

  else//At least 2 arguments
    {
      /*Will only print out the first word after ./a.out */ 
      cout << "You typed: " << argv[1] << endl;
    }


  return 0;
}
