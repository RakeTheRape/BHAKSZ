#include <stdio.h>
int
main (void)
{
  int hossz = 0;
  int wat = 0x01;
  do
    ++hossz;
  while (wat <<= 1);
  printf ("szohossz: %d bites\n", hossz);
  return 0;
}

