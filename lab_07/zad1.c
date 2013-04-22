/*
 * =====================================================================================
 *
 *       Filename:  zad1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08.04.2013 12:24:04
 *       Revision:  none
 *       Compiler:  gcc
 *i
 *         Author:  Marcin Siepetowski 
 *   Organization:  UG
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main (int ile_arg, char* arg[ ]) {
    int i;
    for(i=ile_arg-1; i>0; i--){
        printf(" %s", arg[i]);
        }
printf("\n");
return 0;
}
