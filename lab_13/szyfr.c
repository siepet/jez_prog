#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[]){
	char klucz[] = "byle polska wies spokojna";
	char wiad[1000];
	char odszyfr[1000];
	char y;
	int dlugosc = strlen(klucz);
	int i = 0;
	do{
		y = getchar();
		wiad[i] = (char)y;
		i++;
	}
	while(y != EOF);
	int k = i;
	
	for(i=0;i<k;i++){
		printf("%c",wiad[i]);	
	}
	printf("\n\n\n odszyfr: \n\n\n");
	int w = 0;
	i = 0;
	while(i<k){
		if(w < dlugosc){	
		odszyfr[i] = klucz[w] ^ wiad[i];
		i++;
		w++;
		} else {
		w = 0;
		}
	
	}
	for(i=0;i<k;i++){
		printf("%c",odszyfr[i]);
	}

return 0;
}
