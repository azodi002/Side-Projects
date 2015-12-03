/*
Compiler: g++
How to Compile: (g++ Ternary.cpp) or (g++ Ternary.cpp -o Ternary) 
How to run: (./a.out) or (./Ternary)


Goal of Program: Two hardcoded values, determine the largest and smallest between the two values
What I learned: How to use Ternary Operator

*/

#include <iostream>
using namespace std;

int main(void)
{

  int first_number = 100;
  int second_number = 40;
 
  cout << "Largest number is: " << ( (first_number >= second_number) ? first_number : second_number ) << endl;
  cout << "Smallest number is: " << ( (first_number <= second_number) ? first_number : second_number ) << endl;

  return 0;
}
