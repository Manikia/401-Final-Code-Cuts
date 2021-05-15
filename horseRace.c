#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numberOfHorses;
  double numberOfRaces;

  puts("How many fastest horses would you like ");

  scanf(" %d", &numberOfHorses);

  numberOfRaces = (-0.5 * (double)numberOfHorses) + 8.5;

  printf("Number of races needed %.2lf (If its a decimal, go to the next whole number)\n", numberOfRaces);

  return EXIT_SUCCESS;
}