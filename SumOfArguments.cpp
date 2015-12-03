/*
Compiler: g++
How to Compile: g++ SumOfArguments.cpp
How to run: ./a.out 
How to run with example inputs: ./a.out 1 2 3

Goal of Program: User enters numbers from command line and will return the sum of those entered
What I learned: How to parse main parameters and use the atoi function
*/

#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char* argv[])
{
  /* 8 bytes for type long long */
  /* Range for long long: –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 */
  int total =0;
  
  if(argc < 2)
    {
      cout << "**************** " << endl;
      cout << "Error has occured" << endl;
      cout << "**************** " << endl;
      abort();
    }

  else
    {
      int character_to_decimal=0;
      for(int i=1; i<argc; i++)
	{
	  character_to_decimal = atoi(argv[i]);
	  total += character_to_decimal;
	}
      
      cout << "The total is: " << total << endl;           
    }

  return 0;
}
