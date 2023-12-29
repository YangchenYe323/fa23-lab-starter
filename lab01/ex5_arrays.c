#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Creates an integer with value 5
  // Note: int8_t is a numerical datatype that takes up 1 byte of memory
  int8_t x = 5;

  // Hint: C represents arrays as a pointer to the first element
  // Hint: one malloc call allocates memory for the entire array
  //       it works because the elements are stored side by side
  int* some_array = (int*) malloc(4 * sizeof(int));
  printf("address of the start of the array: %p\n", some_array);

  int* ptr_to_idx_2 = some_array + 2;
  printf("address of index 2: %p\n", ptr_to_idx_2);

  *ptr_to_idx_2 = 10;

  // Hint: this blank should be the same as the previous blank
  //       please don't hard code 10
  printf("value at index 2: %d\n", *ptr_to_idx_2);

  return 0;
}
