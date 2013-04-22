#define PETLA(komenda1, warunek, komenda2) \
komenda1; while(warunek){ komenda2; komenda1; }  

//#include <stdio.h>

int main(){

	int a, b, i;
	a = 0;
	b = 0;
	i = 0;
	
	PETLA(a++, i<5, b++;i++)
	/*
	a++;
	while(i<5){
	i++;
	b++;
	a++;
	}
	*/
	printf("a == %i, b == %i, i == %i \n", a, b, i);

	return 0;
}

