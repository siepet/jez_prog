#include<stdio.h>


int  koniec = 0;


int  szyfruj (int n) {
  return -n;
}


int  char_na_int (char zn) {
  int  n = (int)zn;
  if (n<0)  return n+256;
  else return n;
}


char  int_na_char (int n) {
  return (char)n;
}


int  wczytaj_4_znaki() {
  int  i, n=0;  char zn;
  for (i=0; i<4; i++) {
    zn = getchar();
    if (zn == EOF) {
      zn = ' ';
      koniec = 1;
    }
    n = n*256 + char_na_int(zn);
  }
  return n;
}


void  drukuj_4_znaki(int n) {
  int i;
  for (i=24; i>=0; i-=8)
    printf("%c", int_na_char(n>>i & 255));
}


int  main () {
  int  n;
  while (koniec == 0) {
    n = wczytaj_4_znaki();
    n = szyfruj(n);
    drukuj_4_znaki(n);
  }
  return 0;
}
