#include <stdio.h>
<<<<<<< HEAD
void obraz(int k){
	int tab[8];
	int i;
	unsigned char y = (char)k;
	for(i=7;i>=0;i--){
		tab[i] = (k&1);
		k = k >> 1;
	}
	
	for(i=0;i<8;i++){
		printf("%i",tab[i]);
	}
	printf(" %c ",y);
	printf("\n");
}

int main(){

	unsigned int z;
	printf("Podaj input: \n");
	z = getchar();
	
		
	while(z != EOF){
		
		
		if(z!=10) obraz(z);
		
		z = getchar();
		
	}

	return 1;
=======

int main(){
	char znak;
	int a,b,c;
	int tab[8];
	int i = 0;
	znak = getchar();
	while(znak != EOF){
		for(i=0;i<8;i++){
			a = (znak & 1) ;
			printf("%i",a);
		}
	znak = getchar();
	i++;
	}

	return 0;
>>>>>>> 9cf9f83fe017c53fb9849a7c35b650288a9614fb
}
