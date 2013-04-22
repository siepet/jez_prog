#include "operacje_slownikowe.h"
#include <string.h>
#include <stdio.h>
#define MAX_DL_SLOWA 100
#define MAX_HASEL 1000

typedef struct haslo{
	char pol[MAX_DL_SLOWA];
	char ang[MAX_DL_SLOWA];
} haslo;

haslo slownik[MAX_HASEL];
int ile_hasel;

int zapelnij_slownik(void){
	FILE* slown;
	int i = 0;	
	int sukces;
	slown = fopen("slownik.txt","r");
	if(slown == NULL){
		ile_hasel = 0;
	} else {
	do{
		sukces = fscanf(slown,"%s",slownik[i].pol);
		sukces = fscanf(slown,"%s",slownik[i].ang);
	i++;
	}while(sukces != EOF); 
	ile_hasel = i - 1;
	}
	fclose(slown);
	return ile_hasel;
}
void zapisz_slownik(void){
	FILE* plik;
	plik = fopen("slownik.txt","a+");
	int i;
	for(i=0;i<ile_hasel;i++){
		fprintf(plik, "%s \t", slownik[i].pol);
		fprintf(plik, "%s \n", slownik[i].ang);
	}
	fclose(plik);
}
void inicjuj_slownik(){
	ile_hasel = zapelnij_slownik();
	
}


Logiczne dodaj(char a[MAX_DL_SLOWA], char p[MAX_DL_SLOWA]){
	if(ile_hasel < MAX_HASEL){
		strcpy(slownik[ile_hasel].ang,a);
		strcpy(slownik[ile_hasel].pol,p);
		ile_hasel++;
		return PRAWDA;
	} else {
		return FALSZ;
	}


}

void usun(char a[MAX_DL_SLOWA]){
	int i = 0;
	int j;
	while(i < ile_hasel && strcmp(a,slownik[i].ang) != 0){
		i++;
	}
	if(i < ile_hasel){
		for(j=i+1;j<ile_hasel;j++){
			strcpy(slownik[j-1].ang,slownik[j].ang);
			strcpy(slownik[j-1].pol,slownik[j].pol);
		}
	ile_hasel--;
	}

}

void ang_pol(char zrodlo[MAX_DL_SLOWA], char cel[MAX_DL_SLOWA]){
	int i = 0;
	while(i < ile_hasel && strcmp(zrodlo, slownik[i].ang) != 0){
		i++;
	}
	if(i < ile_hasel){
		strcpy(cel,slownik[i].pol);
	} else {
		strcpy(cel, "");
	}
}

void pol_ang(char zrodlo[MAX_DL_SLOWA], char cel[MAX_DL_SLOWA]){
	int i = 0;
	while(i < ile_hasel && strcmp(zrodlo, slownik[i].pol) != 0){
		i++;
	}
	if(i < ile_hasel){
		strcpy(cel,slownik[i].ang);
	} else {
		strcpy(cel, "");
	}

}
