/*
 * =====================================================================================
 *
 *       Filename:  zad1.c
 *
 *    Description:  funkcja typu void
 *
 *        Version:  1.0
 *        Created:  18.03.2013 12:22:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marcin Siepetowski
 *   Organization:  UG Student
 *
 * =====================================================================================
 */

#include <stdio.h>

void funkcja(int n, int k, int *q, int *r){
	 *q = n / k;
	 *r = n % k;

}

int main(){
	int a,b,q,r;
	printf("Podaj liczbe a i b: a, b \n");
	scanf("%i, %i",&a,&b);
	funkcja(a,b,&q,&r);
	printf("Iloraz: %i, Reszta: %i \n",q,r);
	
	return 0;
}
