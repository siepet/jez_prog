/*
 * =====================================================================================
 *
 *       Filename:  zad2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08.04.2013 12:26:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marcin Siepetowski
 *   Organization:  UG
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAX_DL_IM 11
#define MAX_DL_NA 17
#define DUZO 10000

typedef struct osoba {
char imie[MAX_DL_IM];
char nazwisko[MAX_DL_NA];
int pensja;
} osoba;

osoba tabl[DUZO];

int czytanie(char plik1[]){
	int linie = 0;
	
	FILE* plik;
	plik = fopen(plik1, "r");
	int w;
	do{
		fscanf(plik, "%s", tabl[linie].imie);
		fscanf(plik, "%s", tabl[linie].nazwisko);
	w =	fscanf(plik, "%i", &tabl[linie].pensja);
	linie++;
	}while(w  != EOF);
	fclose(plik);
	return linie-1;
	
}


//void sortowanie(int zero, int ile);
void pisanie(char plik1[], int ile){
	FILE* plik;
	plik = fopen(plik1, "w");
	int i;
	for(i=0;i<ile;i++){
	fprintf(plik, "%s \t", tabl[i].imie);
	fprintf(plik, "%s \t", tabl[i].nazwisko);
	fprintf(plik, "%i \n", tabl[i].pensja);
	}	
	
	fclose(plik);
}
int main(int arg_num, char* arg[]){
	if(arg_num == 3){
	int ile = czytanie(arg[1]);
	if(ile > 0){

		//sortowanie(0,ile);
	pisanie(arg[2],ile);
	}
	}
	else {
printf("\n blad bo zle jestes gópi \n");
}
	return 0;
	}
