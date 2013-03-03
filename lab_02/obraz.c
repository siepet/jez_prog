#include <stdio.h>

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
}
