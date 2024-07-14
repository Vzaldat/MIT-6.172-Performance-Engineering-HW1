// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define print(a, b) printf("size of %s : %zu bytes \n", a, sizeof(b)) //a is the object and b is the attribute of the object, for example - if a is student, b is you
int main() {
  // Please print the sizes of the following types:
  // int, short, long, char, float, double, unsigned int, long long
  // uint8_t, uint16_t, uint32_t, and uint64_t, uint_fast8_t,
  // uint_fast16_t, uintmax_t, intmax_t, __int128, and student

  // Here's how to show the size of one type. See if you can define a macro
  // to avoid copy pasting this code.
  printf("size of %s : %zu bytes \n", "int", sizeof(int));
  // e.g. PRINT_SIZE("int", int);
  //      PRINT_SIZE("short", short);

  // Alternatively, you can use stringification
  // (https://gcc.gnu.org/onlinedocs/cpp/Stringification.html) so that
  // you can write
  // e.g. PRINT_SIZE(int);
  //      PRINT_SIZE(short);

  // Composite types have sizes too.
  typedef struct {
    int id;
    int year;
  } student;

  student you;
  you.id = 12345;
  you.year = 4;


  // Array declaration. Use your macro to print the size of this.
  int x[5];

  // You can just use your macro here instead: PRINT_SIZE("student", you);
  // printf("size of %s : %zu bytes \n", "student", sizeof(you));

  print("int", int);
  print("short", short);
  print("long", long); 
  print("char", char);
  print("float", float);
  print("double", double);
  print("unsigned int", unsigned int);
  print("long long", long long);
  print("uint8_t", uint8_t);
  print("uint16_t", uint16_t);
  print("uint32_t", uint32_t);
  print("uint64_t", uint64_t);
  print("uint_fast8_t", uint_fast8_t);
  print("uint_fast16_t", uint_fast16_t);
  print("uintmax_t", uintmax_t);
  print("intmax_t", intmax_t);
  print("__int128", __int128_t);
  print("uint32_t", uint32_t);
  print("uint64_t", uint64_t);
  print("student", you);
  print("int[]", x);
  
  
  int *y[5];

  student * him;
  // him->id = 15;
  // him->year = 2002;

  print("int*", int*);
  print("short*", short*);
  print("long*", long*); 
  print("char*", char*);
  print("float*", float*);
  print("double*", double*);
  print("unsigned int*", unsigned int*);
  print("long long*", long long*);
  print("uint8_t*", uint8_t*);
  print("uint16_t*", uint16_t*);
  print("uint32_t*", uint32_t*);
  print("uint64_t*", uint64_t*);
  print("uint_fast8_t*", uint_fast8_t*);
  print("uint_fast16_t*", uint_fast16_t*);
  print("uintmax_t*", uintmax_t*);
  print("intmax_t*", intmax_t*);
  print("__int128*", __int128_t*);
  print("uint32_t*", uint32_t*);
  print("uint64_t*", uint64_t*);
  print("student*", him);
  print("int[]*", &y);
  
  return 0;
}
