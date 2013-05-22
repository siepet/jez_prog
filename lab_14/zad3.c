    #include<stdio.h>
    #include<string.h>

    #define DLUGOSC 100

    int  main () {
      char  napis1[DLUGOSC] = "SOPOT",
            napis2[DLUGOSC] = "BRAWA";
      strcpy(napis1+5, napis2+1);
      printf("\n  %s\n\n", napis1+2);
      return 0;
    }
