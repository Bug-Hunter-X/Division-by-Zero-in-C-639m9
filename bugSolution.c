#include <stdio.h>

int main() {
  int a = 10;
  int b = 0;
  
  if (b != 0) {
    int c = a / b;
    printf("Result: %d\n", c);
  } else {
    printf("Error: Division by zero is not allowed.\n");
  }

  return 0;
}
