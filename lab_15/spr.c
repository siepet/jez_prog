  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  
  #define DL_SPISU 10000
  #define MAX_DL_SLOWA 30
  #define WLK_ALFABETU 26
  
  char  spis[DL_SPISU][MAX_DL_SLOWA];
  
  int  wczytaj(void) {
      /* wczytuje caly spis z zewnetrznego pliku o nazwie ,,slowa''
       * jako wartosc oddaje liczbe wczytanych slow
       */
    FILE*  plik = fopen("slowa", "r");
    int  i=0;
    while (fscanf(plik, "%s", spis[i]) == 1)  i++;
    fclose(plik);
    return i;
  }
void znajdz_najwczesniejsze(int dlug, char* slowo){
	int i;
	char* pom;
	int ile = 0;
	int s_min = 0;
	for(i=0;i<dlug;i++){
		if(strcmp(spis[i],spis[s_min]) < 0) s_min = i;
		

	}
	strcpy(slowo,spis[s_min]);
	
}


  int  main() {
    char  slowo[MAX_DL_SLOWA];
    int dlug = wczytaj();
    znajdz_najwczesniejsze(dlug, slowo);
    printf("\n Najwczesniejszym alfabetycznie slowem jest  %s .\n\n", slowo);
    return 0;
  }
 
