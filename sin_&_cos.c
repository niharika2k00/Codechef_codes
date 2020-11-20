
#include <conio.h>
#include <math.h>
#include <stdio.h>

void main() {
  float r;
  int i;
  char ch;
  printf("- - - - - - - - - - - - - - - - - -");
  printf("\nAngle \t Sin \t Cos \n");
  printf("- - - - - - - - - - - - - - - - - -");
  for (i = 0; i <= 180; i = i + 30) {
    r = i * 3.14159 / 180;
    printf("\n%3d \t %5.2f \t %5.2f \n", i, sin(r), cos(r));
  }
  printf("- - - - - - - - - - - - - - - - - -");

  printf("HELLO\t\tWORLD\n");
  printf("%d \n", 3 / 4 > 0);
  printf("%d \n", 0 && 1);
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i = 6;
  int *p = &a[0];
  printf("%d\n", *(p + i));
  
}