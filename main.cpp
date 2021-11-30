/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Christine Hawkins
 */


/*
Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and
complete. In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even
number. Hint: See the remainder (modulo) operator in §3.4.

EX 1

*/


#include <iostream>
#include "std_lib_facilities.h"


int main() {

cout << "Integer value:";
int value;
cin >>value; // read in value

//if mod 2, then it's even 
  if (value%2==0){
  cout<<"The value "<<value<<" is an even number\n";
  }
  else
  cout<<"the value "<<value<<" is an odd number\n";



} 