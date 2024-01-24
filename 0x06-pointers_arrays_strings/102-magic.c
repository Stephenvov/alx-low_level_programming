#include <stdio.h>

/**
   * You are not allowed to use the variable a in your new line of code
   *
   * Return : 0
   */
int main(void)
{
  int n;
  int x[5];
  int *p;

  x[2] = 1024;
  p = &n;
  p = &n;
  *(p + 5) = 98;
  
  printf("x[2] = %d\n", x[2]);
  return (0);
}

