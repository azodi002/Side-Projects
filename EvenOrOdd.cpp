/*
Compiler: g++
How to Compile: g++ EvenOrOdd.cpp
How to run: ./a.out EvenOrOdd.cpp

Goal of Program: User enters a number and returns whether it is EVEN or ODD
What I learned: How to use enumerations 
*/

#include <iostream>
using namespace std;

/* ODD = 0, EVEN = 1 */
enum Even_Or_Odd {ODD,EVEN};

int User_Input_Even_Or_Odd(double UserInput);
void Print_Even_Or_Odd(int result_of_even_or_odd_function, double UserInput);

int main(void)
{
  double UserInput = 0.0;//Number that user wants to see is even or odd
  int InputEvenOrOddResult =0;//Used to determine whether number is Even or Odd
  
  cout << "Enter any number (decimals are acceptable)" << endl;
  cin >> UserInput;
  
  InputEvenOrOddResult = User_Input_Even_Or_Odd(UserInput);
  Print_Even_Or_Odd(InputEvenOrOddResult, UserInput);

  return 0;
}

/* 
Input: Number that user inputs/wants to see is even or odd
Return Type: Returns the enumeration (0 or 1)
*/

int User_Input_Even_Or_Odd(double UserInput)
{
  if( ((int)UserInput % 2) == 0 )
    {
      return EVEN;
    }
  
  return ODD;
}

/*
Input: (Result of function that returns the enumeration, number that user entered)
Return: Print to screen whether user input was EVEN or ODD
*/

void Print_Even_Or_Odd(int result_of_even_or_odd_function, double UserInput)
{
  if(result_of_even_or_odd_function == 0)
    {
      cout << "The number: " << UserInput << " is an " << "ODD number" << endl;
    }

  else
    {
      cout << "The number: " << UserInput << " is an " <<"EVEN number" << endl;
    }
}
