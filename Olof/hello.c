#include <stdio.h>
#include <stdlib.h>

int main() {
  int *a = malloc(sizeof(int));
  *a = 1;
  int **x = &a;
  **x = 2;
  int ***b = &x;
  ***b = 3;
  int ****c = &b;
  ****c = 4;
  free(**b);
  printf("a %d\n", *a);
  printf("x %d\n", **x);
  printf("b %d\n", ***b);
  return 0;
}
