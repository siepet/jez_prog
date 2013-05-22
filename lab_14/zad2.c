#include<stdio.h>
#define DLUGOSC 100

    int  main () {
      char  napis[DLUGOSC] = "KLASYFIKACJA";
      napis[9]='M'; napis[10]='\0';
      printf("\n  %s\n\n", napis+5);
      return 0;
    }
