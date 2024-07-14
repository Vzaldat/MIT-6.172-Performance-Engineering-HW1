// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char * argv[]) {  // What is the type of argv?
  int i = 5;
  // The & operator here gets the address of i and stores it into pi
  int * pi = &i;
  // The * operator here dereferences pi and stores the value -- 5 --
  // into j.
  int j = *pi;

  char c[] = "6.172";
  char * pc = c;  // Valid assignment: c acts like a pointer to c[0] here.
  char d = *pc;
  printf("char d = %c\n", d);  // What does this print?
  // char d = 6

  // compound types are read right to left in C.
  // pcp is a pointer to a pointer to a char, meaning that
  // pcp stores the address of a char pointer.
  char ** pcp;
  pcp = argv;  // Why is this assignment valid?
  //here, argv is acts as argv[0] and it is pointer of argv[] to begin with
  //so, the value of the pointer to pointer pcp is value of argv[0]

  const char * pcc = c;  // pcc is a pointer to char constant
  char const * pcc2 = c;  // What is the type of pcc2? pcc2 is a pointer to constant characters

  // For each of the following, why is the assignment:
  //*pcc = '7';  // invalid?
  //value for pcc here is not assigned
  pcc = *pcp;  // valid?
  //pointer to value of pcp is dereferenced to pointer
  pcc = argv[0];  // valid?
  //similar explanation

  char * const cp = c;  // cp is a const pointer to char
  // For each of the following, why is the assignment:
  //cp = *pcp;  // invalid?
  //cp is a constant array of characters and pcp is a pointer variable
  //cp = *argv;  // invalid?
  //similar to above 
  *cp = '!';  // valid?
  //the pointer needs to remain a constant

  const char * const cpc = c;  // cpc is a const pointer to char const
  // For each of the following, why is the assignment:
  //cpc = *pcp;  // invalid?
  //cpc = argv[0];  // invalid?
  //*cpc = '@';  // invalid?
  //this is a constant and cannot be changed for all the three statements

  return 0;
}
