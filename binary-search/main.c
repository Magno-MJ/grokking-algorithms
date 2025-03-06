#include <stdio.h>

int binary_search(int number_list[], int size, int target) {
  int lower = 0;
  
  int higher = size - 1;

  while (lower <= higher) {
    int middle = (lower + higher) / 2;

    int number_found = number_list[middle];

    if (number_found == target) {
      return middle;
    }

    if (number_found > target) {
      higher = middle - 1;
    } else {
      lower = middle + 1;
    }
  } 

  return -1;
}

int main(void) {
  int number_list[] = {1, 3, 5, 7, 9};
  
  int list_size = sizeof(number_list) / sizeof(int);

  int result = binary_search(number_list, list_size, 3);
  
  int number_not_found = result < 0;

  if (number_not_found) {
    printf("Number not found\n");
    
    return 0;
  }

  printf("Number found is at the position: %d\n", result);
}
