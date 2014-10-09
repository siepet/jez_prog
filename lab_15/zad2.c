#include <stdio.h>
#include <string.h>


int main(){
	char *slowo;
	char *com;
	int dl;
	printf("Podajże waści panie słowo twoje!\n");
	do{
	scanf("%s",slowo);
	dl = strlen(slowo);
	printf("%i",dl);
	} while(dl != 3);




	
