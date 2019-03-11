#include <stdio.h>
int
main (void)
{
  int hossz = 0;
  int wat = 1;
  do
    ++hossz;
  while (wat <<= 1);
  printf ("szohossz: %d bites\n", hossz);
  return 0;
}
