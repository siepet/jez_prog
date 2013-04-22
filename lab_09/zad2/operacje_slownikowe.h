#define MAX_DL_SLOWA 100

typedef  enum { FALSZ=0, PRAWDA=1 }  Logiczne;

void  inicjuj_slownik(void);
  /* powoduje, ze slownik staje sie pusty */

Logiczne  dodaj(char a[MAX_DL_SLOWA], char p[MAX_DL_SLOWA]);
  /* dodaje do slownika pare <a,p>
   * wynik  PRAWDA  oznacza, ze sie udalo dodac,
   * wynik  FALSZ  oznacza, ze slownik juz byl pelny
   */

void  usun(char a[MAX_DL_SLOWA]);
  /* usuwa ze slownika pare slow, zlozona z angielskiego slowa  a
   * i jego polskiego odpowiednika
   */

void  ang_pol(char zrodlo[MAX_DL_SLOWA], char cel[MAX_DL_SLOWA]);
  /* do angielskiego slowa  zrodlo
   * wyszukuje w slowniku polski odpowiednik  cel
   * jesli takiego nie ma, to pod  cel  podstawia slowo puste
   */

void  pol_ang(char zrodlo[MAX_DL_SLOWA], char cel[MAX_DL_SLOWA]);
  /* do polskiego slowa  zrodlo
   * wyszukuje w slowniku angielski odpowiednik  cel
   * jesli takiego nie ma, to pod  cel  podstawia slowo puste
   */

