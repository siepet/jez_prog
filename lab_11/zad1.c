#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int czyPoprawne(char rzymska[]){
	int i;
	char * rzymskie[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	for(i=0;i<=12;i++){
		if(strcmp(rzymskie[i],rzymska) == 0){
			return 1; // return true
		} else {
			return 0; // return false
		}
	}
}
int main(){
	

	int arabskie[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
	char * rzymskie[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

	int p; 
	int i;
	int w;
	char * rz = malloc(sizeof(char));

	printf("Wybierz: \n");
	printf("1. arabskie -> rzymskie \n");
	printf("2. rzymskie -> arabskie \n");
	scanf("%i",&w);
	switch(w) {
	case 1: {
		printf("Podaj liczbe: \n");
		scanf("%i",&p);
	
		for(i=12;i>=0;i--){
			while(p >= arabskie[i]){
				p -= arabskie[i];
				printf("%s",rzymskie[i]);
			}
	
		}
	printf("\n");
	}
	break;
	
	case 2: {
		printf("Podaj liczbe: \n");
		scanf("%s",rz);
		while(czyPoprawne(rz) != 1){
			printf("Blad, podaj ponownie: \n");
			scanf("%s",rz);
		}
		

	break;
	}
	}
	return 0;

}
