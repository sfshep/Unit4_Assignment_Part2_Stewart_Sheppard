/*
Stewart Sheppard
Unit4_Assignment- Part 2 - Loops (Repetition Structures)
COSC 1436 570002
Repl.it / Github
This program will work with counters and perform calculations.
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison

using namespace std;

int main() 
{
int stop = 0;

       cout << "\nPlease enter a stopping point that is an integer: ";
       stop = validateInt(stop); 

       for(int i = 1; i <= stop; i++)
       {
         //Code can handle 1-19.
          if( ((i % 10) == 1) && (i != 11)) //this number ends in 1, but prevevents an inappropriate ordinal on 11.
          {
             cout << i << "st" << " Hello ..." << endl; 
          }
          else if((i % 10 == 2) && (i != 12)) //this number ends in 2, but prevevents an inappropriate ordinal on 12.
          {
            cout << i << "nd" << " Hello ..." << endl; 
          }
          else if((i % 10 == 3) && (i != 13)) //this number ends in 3, but prevevents an inappropriate ordinal on 13.
          {
            cout << i << "rd" << " Hello ..." << endl; 
          }
           else if ( i % 10 <= 19) 
            {
              cout << i << "th" << " Hello ..." << endl; 
            }
       }
return 0;     
}