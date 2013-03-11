/*
 * =====================================================================================
 *
 *       Filename:  zadanie2.c
 *
 *    Description:  mozliwie male dane, na ktorych wyniki dzialania sa niepoprawne
 *
 *        Version:  1.0
 *        Created:  04.03.2013 13:28:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marcin Siepetowski 
 *   Organization:  Student UG
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(){
	short a = SHRT_MIN;
	short b = SHRT_MIN;
	
	int c = INT_MIN;
	int d = -1;

	long e = LONG_MIN;
	long f = -1;
	
	long long g = LLONG_MIN;
	long long h = -1;

	float i = 0.000001;
	float qq = 0.000002;
	float j = 2;
	
	double k = DBL_MIN;
	double l = DBL_EPSILON;

	long double m = LDBL_MIN;
	long double n = LDBL_DIG;

	
	printf("a: %i, b: %i",a,b);
	printf("\n a+b = %i\n",a+b+1);		
	
	printf("\n %e * %e = %e",i,qq,i*qq);
	return 0;
}
