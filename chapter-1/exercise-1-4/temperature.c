#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 5;

  celsius = lower;

  while (celsius <= upper) {
    fahr = (celsius * 9 / 5) + 32;

    printf("%6.0f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
