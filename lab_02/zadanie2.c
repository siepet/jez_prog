#include <stdio.h>

int cztery_znaki(){
	int pom = 0;
	int i;
	unsigned char znak;

	for(i=0;i<4;i++){
		znak = getchar();
		if(znak == EOF){
			znak = ' ';
		}
		pom = (pom << 8) + znak;
	}
	return pom;
}

int szyfr(int n){
	return n;
}

int main(){
	int x;
	x = cztery_znaki();

	printf("\n%i\n",x);
	
	return 0;
}


