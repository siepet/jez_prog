#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_DL_SLOWA 30

typedef struct sl {
  char slowo[MAX_DL_SLOWA];
  struct sl* dalej;
  struct sl* wroc;
}*  lista;

//=======================================================

int pusta(lista lis) {

	if(lis == NULL){
		return 1;
	} else {
		return 0;
	}	  
  // jesli  lis  jest lista pusta (wskaznik  NULL)
  // to wartoscia jest liczba rozna od 0, w przeciwnym razie 0

}

//=======================================================

char* pierwsze(lista lis) {

	return lis->slowo;
 	
	

  // zwraca wskaznik na pierwsze slowo z listy  lis
  // jesli jest pusta, to dzialanie nieokreslone

}

//=======================================================

lista reszta(lista lis) {
  	return lis->dalej;
// zwraca liste  lis  z usunietym pierwszym slowem
// jesli jest pusta, to dzialanie nieokreslone
}

//=======================================================

lista dolacz(char slow[MAX_DL_SLOWA], lista lis) {
	lista pom = (lista)(malloc(sizeof(struct sl))); 
	strcpy(pom->slowo,slow);  
	pom->dalej = lis;
	
return pom;
// dolacza  slowo  do poczatku listy  lis

}

//=======================================================

void druk(lista lis) {

  	lista wynik = lis;
	while(wynik != NULL){
		printf("%s \n", wynik->slowo);
		wynik = wynik->dalej;
	}
	// drukuje po kolei wszystkie slowa z  lis

}

//=======================================================

lista odwroc(lista lis) {
  // odwraca liste  lis  od konca
  lista pom = NULL;
  char slowo[MAX_DL_SLOWA];
  while (! pusta(lis)) {
    strcpy(slowo, pierwsze(lis)); 
    lis = reszta(lis);
    pom = dolacz(slowo, pom);
  }
  return pom;
}

//=======================================================

int main () {
  lista lis = NULL;
  lis = dolacz("abc", dolacz("def", dolacz("ghi", lis)));
  druk(odwroc(lis));
  return 0;
}
