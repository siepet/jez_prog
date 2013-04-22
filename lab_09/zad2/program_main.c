#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "operacje_slownikowe.h"

int main() {
  Logiczne  koniec = FALSZ;
  char znak;
  char slowo1[MAX_DL_SLOWA], slowo2[MAX_DL_SLOWA];

  inicjuj_slownik();
  printf("\n  SLOWNIK ANGIELSKO-POLSKI I POLSKO-ANGIELSKI\n");

  do {
    printf("\n  Wybierz operacje:");
    printf("\n    1 -- tlumaczenie z angielskiego na polski");
    printf("\n    2 -- tlumaczenie z polskiego na angielski");
    printf("\n    3 -- dodanie hasla");
    printf("\n    4 -- usuniecie hasla");
    printf("\n    5 -- koniec pracy");
    printf("\n       -------");
    printf("\n       | ?  ");
    do {
      scanf("%c", &znak);
    } while (isspace(znak));
    printf("       -------");
    switch (znak) {

      case '1':
	printf("\n  ANG: "); scanf("%s", slowo1);
	ang_pol(slowo1, slowo2);
	if (strlen(slowo2) == 0)  printf("  Nie ma takiego slowa.\n");
	else  printf("  POL: %s\n", slowo2);
      break;

      case '2':
	printf("\n  POL: "); scanf("%s", slowo1);
	pol_ang(slowo1, slowo2);
	if (strlen(slowo2) == 0)  printf("  Nie ma takiego slowa.\n");
	else  printf("  ANG: %s\n", slowo2);
      break;

      case '3':
	printf("\n  ANG: "); scanf("%s", slowo1);
	printf("  POL: "); scanf("%s", slowo2);
        if (dodaj(slowo1, slowo2))  printf("  OK\n");
	else  printf("\n  Brak miejsca w slowniku.\n");
      break;

      case '4':
	printf("\n  ANG: "); scanf("%s", slowo1);
	usun(slowo1);  printf("  OK\n");
      break;

      case '5':
        printf("\n  Dziekuje.\n\n"); koniec = PRAWDA;
      break;

      default:
        printf("\n  BLAD! Podaj cyfre od 1 do 5 wlacznie\n");
      break;

    }
  } while (!koniec);
  return 0;
}
