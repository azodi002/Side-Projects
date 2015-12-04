/*
Compiler: g++
How to Compile: g++ FortuneCookie.cpp   or g++ FortuneCookie.cpp -o FortuneCookie
How to run: (./a.out)  or ./FortuneCookie

Goal of Program: User opens up fortune cookie and reads fortune
What I Learned: How to use the random function 
*/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


void FortuneTeller(int FortuneNumber);
void LotteryNumbers();

int main(void)
{
  int FortuneNumber=0; 
  srand(time(NULL));
  
  //There are 5 fortunes (1-5)
  FortuneNumber = (rand() % 5) + 1;

  FortuneTeller(FortuneNumber);


    
  return 0;
}


void FortuneTeller(int FortuneNumber)
{

  switch(FortuneNumber)
    {
    case 1: 
      cout << "You will have nice company soon" << endl;
      LotteryNumbers();
      break;
   
    case 2:
      cout << "Your presence brings joy to others" << endl;
      LotteryNumbers();
      break;
      
    case 3: 
      cout << "Your kindness will take you far" << endl;
      LotteryNumbers();
      break;
      
    case 4:
      cout << "You motivate others with your perseverance" << endl;
      LotteryNumbers();
      break;
      
    case 5:
      cout << "A nice vacation is in your near future" << endl;
      LotteryNumbers();
      break;
      
    default: cout <<"No fortune found in your cookie!" << endl;
    }

  return;
}


void LotteryNumbers()
{
  srand(time(NULL));
  
  int LotteryNumbers=0;
  
   
  //Lottery Tickets come with 5 numbers
  for(int i=0; i<5; i++)
    {
      //Lottery numbers can range from 1-60
      LotteryNumbers = (rand() % 60) + 1;
      cout << LotteryNumbers << " ";
    }
  cout << endl;

  return;
}
