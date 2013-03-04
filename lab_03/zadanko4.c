// Zadanie 4
// Autor: Marcin Siepetowski, grupa 4D, 215488



#include <stdio.h>


int main(){

	float x = 1.0;
	double y = 1.0;
	long double z = 1.0;

	printf("float: \n");
	while(1.0 + x > 1.0){
		x = x/2.0;
		printf("%e\n",x);
	}
	printf("\n");
	printf("double: \n");
	while(1.0 + y > 1.0){
		y = y/2.0;
		printf("%le\n ",y);
	}

	printf("\n");
	printf("long double: \n");
	while(1.0 + z > 1.0){
		z = z/2.0;
		printf("%Le\n ",z);
	}

	printf("\n float: \n");
	printf("%e",x);
	
	printf("\n double: \n");
	printf("%le",y);
 
	printf("\n long double: \n");
	printf("%Le \n",z);
	return 0;
}
