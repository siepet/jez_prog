#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define IMIE_MAX 10
#define NAZW_MAX 15
#define IL_OSOB 10000

typedef struct {
  char imie[IMIE_MAX+1];
  char nazwisko[NAZW_MAX+1];
  int pensja;
} osoba;

osoba spis[IL_OSOB];

//=======================================================

void  utworz_spis(void) {
  FILE* baza =
    fopen("/home/pracinf/stefan/public_html/Dydaktyka/JezProg/Slajdy/Labs05/baza_danych",
  "r");
  if (baza == NULL) printf("\n ZLE\n\n");
  for (int i=0; i<IL_OSOB; i++) {
    fscanf(baza, "%s", spis[i].imie);
    fscanf(baza, "%s", spis[i].nazwisko);
    fscanf(baza, "%i", &spis[i].pensja);
  }
  fclose(baza);
}

//=======================================================

void  sortuj_spis(void) {
	for(int i=1;i<=IL_OSOB;i++){
		if(strcmp(spis[i-1].nazwisko,spis[i].nazwisko) == 0)

	}	
}

//=======================================================

int  znajdz_nazwisko (char na[NAZW_MAX+1], char im[IMIE_MAX+1], int *p)
{

	for(int i = 0; i<IL_OSOB; i++){
		if(strcmp(spis[i].nazwisko,na) == 0){
		strcpy(im,spis[i].imie);	
		*p = spis[i].pensja;
		return 1;
		}	
	}
	
	return 0;
}

//=======================================================

int  znajdz_imie (char im[NAZW_MAX+1], char na[IMIE_MAX+1], int *p)
{
	
	for(int i = 0; i<IL_OSOB; i++){
		if(strcmp(spis[i].imie,im) == 0){
		strcpy(na,spis[i].nazwisko);	
		*p = spis[i].pensja;
		return 1;
		}	
	}
	
	return 0;
}

//=======================================================

int main () {
  char odpowiedz, im[NAZW_MAX+1], na[IMIE_MAX+1];
  int p;

  utworz_spis(); sortuj_spis();

  do {
    printf(
     "\n Znalezc wg imienia (I), nazwiska (N), czy zakonczyc (Q)? "
    );
    do { odpowiedz = getchar(); }
    while (isspace(odpowiedz));
    odpowiedz = tolower(odpowiedz);
    switch (odpowiedz) {
    case 'i' :
      printf("\n szukane imie: ");
      scanf("%s", im);
      if (znajdz_imie(im, na, &p))
	printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma imienia %s\n", im);
      break;
    case 'n' :
      printf("\n szukane nazwisko: ");
      scanf("%s", na);
      if (znajdz_nazwisko(na, im, &p))
	printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma nazwiska %s\n", im);
      break;
    case 'q' : break;
    default :
      printf(" Poprawne odpowiedzi: N, I, Q.\n");
    }
  }  while (tolower(odpowiedz) != 'q');

  printf("\n DZIEKUJE.\n\n");
  return 0;
}
