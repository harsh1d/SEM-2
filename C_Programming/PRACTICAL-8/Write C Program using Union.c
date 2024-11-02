#include <stdio.h>
#include <string.h> // Include the string.h library for string manipulation functions

// Define a union called Data
union Data {
  int i;
  float f;
  char str[20];
};

// Main function
int main() {
  // Print name
  printf("\nHARSH D\n");

  // Print size of union
  printf("Size of union: %d\n", sizeof(union Data));

  // Create an instance of Data union
  union Data data;

  // Assign and print integer data
  data.i = 10;
  printf("data.i: %d\n", data.i);

  // Assign and print float data
  data.f = 220.5;
  printf("data.f: %f\n", data.f);

  // Assign string data using strcpy
  strcpy(data.str, "HARSH");
  // Print string data
  printf("data.str: %s\n", data.str);

  return 0;
}

