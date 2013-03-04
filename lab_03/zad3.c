// Zadanie 3
// Autor: Marcin Siepetowski
//
#include <stdio.h>
#include <float.h>
#include <limits.h>


int main(){
	printf("FLT_MAX:\n");
	printf("int: %i\n",(int)FLT_MAX);
	printf("float: %e\n",FLT_MAX);
	printf("double: %le\n",(double)FLT_MAX);
	printf("\n");
	
	printf("DBL_MAX:\n");
	printf("int: %i\n",(int)DBL_MAX);
	printf("double: %le\n",DBL_MAX);
	printf("short: %i\n",(short)DBL_MAX);
	printf("\n");

	printf("LONG_MAX:\n");
	printf("double: %le\n",(double)LONG_MAX);
	printf("int: %i\n",(int)LONG_MAX);
	printf("long int: %li\n",LONG_MAX);
	printf("\n");

	printf("SHORT_MAX:\n");
	printf("int: %i\n",(int)SHRT_MAX);
	printf("long long int: %lli\n",(long long)SHRT_MAX);
	printf("double: %le\n",(double)SHRT_MAX);
	printf("\n");

}


