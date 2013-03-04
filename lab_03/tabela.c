#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(){


printf("short: \n");
printf("\t wartosc minimalna: %i \n",SHRT_MIN);
printf("\t wartosc maksymalna: %i \n",SHRT_MAX);
printf("\t format wejscia/wyjscia: %%i\n");
printf("\n");

printf("int: \n");
printf("\t wartosc minimalna: %i \n",INT_MIN);
printf("\t wartosc maksymalna: %i \n",INT_MAX);
printf("\t format wejscia/wyjscia: %%i\n");
printf("\n");

printf("long: \n");
printf("\t wartosc minimalna: %i \n",LONG_MIN);
printf("\t wartosc maksymalna: %i \n",LONG_MAX);
printf("\t format wejscia/wyjscia: %%li\n");
printf("\n");

printf("long long: \n");
printf("\t wartosc minimalna: %i \n",LLONG_MIN);
printf("\t wartosc maksymalna: %i \n",LLONG_MAX);
printf("\t format wejscia/wyjscia: %%lli\n");
printf("\n");

printf("float: \n");
printf("\t wartosc minimalna: %i \n",FLT_MIN);
printf("\t wartosc maksymalna: %i \n",FLT_MAX);
printf("\t ziarno: %i \n",FLT_EPSILON);
printf("\t precyzja: %i \n",FLT_DIG);
printf("\t format wejscia/wyjscia: %%f lub %%e\n");
printf("\n");

printf("double: \n");
printf("\t wartosc minimalna: %i \n",DBL_MIN);
printf("\t wartosc maksymalna: %i \n",DBL_MAX);
printf("\t ziarno: %i \n",DBL_EPSILON);
printf("\t precyzja: %i \n",DBL_DIG);
printf("\t format wejscia/wyjscia: %%lf lub %%le\n");
printf("\n");

printf("long double: \n");
printf("\t wartosc minimalna: %i \n",LDBL_MIN);
printf("\t wartosc maksymalna: %i \n",LDBL_MAX);
printf("\t ziarno: %i \n",LDBL_EPSILON);
printf("\t precyzja: %i \n",LDBL_DIG);
printf("\t format wejscia/wyjscia: %%Lf lub %%Le\n");
printf("\n");

	return 0;
}
