/* 
Student ID: @00194989
Filename: rps.cpp
Assignment: HW6: R/P/S   
Description: A program to play rock-paper-scissors game.      
*/ 

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
  
  char userChoice;
  int user, computer, result;
  
  cout << "Please enter your move: " << endl;
  cout << "('P' for Paper, 'R' for Rock, 'S' for Scissors) "; 
  cin >> userChoice;
  
  if (userChoice == 'R' && userChoice == 'r' || userChoice == 'P' && userChoice == 'p' || userChoice == 'S' && userChoice == 's')
  {
    srand(time(0));
    computer = (rand() % 2);
  } 
  
  switch (userChoice) 
  {
    case 'R':
    case 'r':
      user = 0;
    break; 
    
    case 'P':
    case 'p':
      user = 1;
    break;
      
    case 'S':
    case 's':
      user = 2;
    break; 
    
    default:
      cout << "Pick 'R'/'r' for Rock, 'P'/'p' for Paper, or 'S'/'s' for Scissors. " << endl;   
   }
    
   if (computer == 0 && user == 0)
   {
      cout << "Computer's move is Rock " << endl; 
      cout << "Tie!! " << endl; 
   } 
   else if (computer == 0 && user == 1)
   {
     cout << "Computer's move is Rock " << endl; 
     cout << "Computer Wins! Paper Covers Rock!! " << endl; 
   }
   else if (computer == 0 && user == 2)
   {
     cout << "Computer's move is Rock " << endl; 
     cout << "Computer Wins! Rock breaks scissors!! " << endl; 
   }
  else if (computer == 1 && user == 1)
   {
     cout << "Computer's move is Paper " << endl; 
     cout << "Tie!! " << endl; 
   }
  else if (computer == 1 && user == 2)
   {
     cout << "Computer's move is Paper " << endl; 
     cout << "You Win! Scissors cut paper!! " << endl; 
   }
  else if (computer == 2 && user == 1)
   {
     cout << "Computer's move is Scissors " << endl; 
     cout << "Computer Wins! Scissors cut paper!! " << endl; 
   }
  else if (computer == 2 && user == 2)
   {
     cout << "Computer's move is Scissors " << endl; 
     cout << "Tie!! " << endl; 
   }
  return 0;
 
}
/* 
[vtsarkov@hills cs110a]$ g++ rps.cpp
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) r
Computer's move is Rock
Tie!!
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) R
Computer's move is Rock
Tie!!
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) r
Computer's move is Rock
Tie!!
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) p
Computer's move is Rock
Computer Wins! Paper Covers Rock!!
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) x
Pick 'R'/'r' for Rock, 'P'/'p' for Paper, or 'S'/'s' for Scissors.
Computer's move is Rock
Tie!!
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) s
Computer's move is Rock
Computer Wins! Rock breaks scissors!!
[vtsarkov@hills cs110a]$ ./a.out
Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) p
Computer's move is Rock
Computer Wins! Paper Covers Rock!!
*/ 
