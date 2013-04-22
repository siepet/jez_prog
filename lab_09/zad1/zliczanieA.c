#include "licznik.h"

int main () {
  int c = getchar();
  while (c != EOF) {
    if (c == 'a' || c == 'A') policz(0);
    c = getchar();
  }
  policz(1);

  return 0;
}
