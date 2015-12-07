/*
Compiler: g++
How to Compile: g++ goto.cpp or g++ goto.cpp -o goto
How to run: ./a.out or ./goto

Goal of Program: Print statements and intentionally skip a statement by using a goto 
What I learned: How to use a goto statement with a label
*/


#include <iostream>
using namespace std;

int main()
{
  cout  << "Before goto" << endl;
  goto skip;

  cout << "This message shouldn't show up" << endl;

  skip: cout << "2nd message" << endl;

  return 0;
}
