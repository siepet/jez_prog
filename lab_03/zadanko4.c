#include <stdio.h>


int main(){

	float x = 1.0;
	double y = 1.0;
	long double z = 1.0;

	
	while(1.0 + x > 1.0){
		x = x/2.0;
		printf("%f ",x);
	}
	printf("\n");
	while(1.0 + y > 1.0){
		y = y/2.0;
		printf("%lf ",y);
	}

	printf("\n");
	while(1.0 + z > 1.0){
		z = z/2.0;
		printf("%Lf ",z);
	}


	printf("\n");
	printf("float     |      double     |     long double|\n");
	printf("%f        |      %lf        |     %Lf",x,y,z);
	
	printf("\n");
 
	return 0;
}
