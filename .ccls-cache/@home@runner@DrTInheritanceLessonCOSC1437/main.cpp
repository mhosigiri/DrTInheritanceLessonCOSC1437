/*
        Dr. Tyson McMillan Working with
        Source URL: https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
        updated: 4-10-2017, 4-9-2018, 10-30-2018, 4-15-2020 by Dr. Tyson
McMillan
        //Extended to have a custom on-demand menu.
Expand Dr_T's Working Solution

1. Fork Off of: https://repl.it/@TysonMcMillan/DrTInheritanceLessonCOSC1437
(Links to an external site.)

//Dr_T Challenge - Pair Programming
1. Expand this program to accept input to Draw a Diamond Pattern
2. Expand this program to accept input to Draw an Oval Pattern

EXTRA (new)

Extend this program for a Trapezoid print and Menu Item

Extend this program for a Pyramid print and Menu Item

Extend the Program to print 1 of these cool Shapes:
https://visme.co/blog/cool-shapes/ (Links to an external site.)


3. Share your solution with your team member.
4. Both upload your share URL to Extra Credit Item 15 Participation Extra Credit
4. Complete the attendance tracker.
*/

#include "includes.h" //all the .h includes of program

int main() {
  char menuOption = '\0'; // int main local menu option

  do {
    menuOption = showMenu(menuOption);              // function call
  } while (menuOption != 'e' && menuOption != 'E'); // DeMorgan's Law

  cout << "\nGoodbye" << endl;

  return 0;
}
