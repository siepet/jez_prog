    #include<stdio.h>
    #include<string.h>

    #define DLUGOSC 100

    int  main () {
      char  instytut[] = "INSTYTUT",
            informatyka[] = "INFORMATYKA",
            uniwersytet[] = "UNIWERSYTET",
            gdanski[] = "GDANSKI",
            calosc[DLUGOSC];
    int i;
    strcpy(calosc,instytut);
    i = strlen(calosc);
    strcpy(calosc+i," ");
    strcpy(calosc+i+1,informatyka);
    i = strlen(calosc);
    strcpy(calosc+i-1,"I");
    strcpy(calosc+i," ");
    strcpy(calosc+i+1, uniwersytet);
    i = strlen(calosc);
    strcpy(calosc+i,"U");
    strcpy(calosc+i+1," ");
    i = strlen(calosc);
    strcpy(calosc+i,gdanski);
    i = strlen(calosc);
    strcpy(calosc+i,"EGO");
      printf("\n%s\n", calosc);
      return 0;
    }
