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
printf("\t wartosc minimalna: %f \n",FLT_MIN);
printf("\t wartosc maksymalna: %f \n",FLT_MAX);
printf("\t ziarno: %f \n",FLT_EPSILON);
printf("\t precyzja: %i \n",FLT_DIG);
printf("\t format wejscia/wyjscia: %%f lub %%e\n");
printf("\n");

printf("double: \n");
printf("\t wartosc minimalna: %lf \n",DBL_MIN);
printf("\t wartosc maksymalna: %lf \n",DBL_MAX);
printf("\t ziarno: %lf \n",DBL_EPSILON);
printf("\t precyzja: %i \n",DBL_DIG);
printf("\t format wejscia/wyjscia: %%lf lub %%le\n");
printf("\n");

printf("long double: \n");
printf("\t wartosc minimalna: %Lf \n",LDBL_MIN);
printf("\t wartosc maksymalna: %Lf \n",LDBL_MAX);
printf("\t ziarno: %Lf \n",LDBL_EPSILON);
printf("\t precyzja: %i \n",LDBL_DIG);
printf("\t format wejscia/wyjscia: %%Lf lub %%Le\n");
printf("\n");

	return 0;
}
