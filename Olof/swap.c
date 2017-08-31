#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int ordered(int *a, int *b);

int main() {
  int a = 1;
  int b = 222;
  if (!ordered(&a, &b)) {
    swap(&a, &b);
  }
  printf("a: %d, b: %d\n", a, b);
  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  printf("%d\n", temp);
  *a = *b;
  *b = temp;
}

int ordered(int *a, int *b) {
  return *a < *b;
}
