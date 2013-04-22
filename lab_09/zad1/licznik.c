#include "licznik.h"

void  policz(int drukowac) {
  static int  ile=0; 
  if (drukowac)
    printf("\nZnaleziono 'a' lub 'A'  %i razy\n\n", ile);
  else
    ile++;
}
