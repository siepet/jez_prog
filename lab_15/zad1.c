#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rando(){
	return rand() % 3 + 1;
}
int main(){
	int c_int;
	int h_int;
	int suma = 0;
	int sukces = 0;
	while(suma != 20){
		printf("czlowiek: ");
		scanf("%i",&h_int);
		suma += h_int;
		c_int = rando();
		printf("komputer: %i ",c_int);
		suma += c_int;
		printf("suma: %i \n",suma);
	}
	return 0;
}
