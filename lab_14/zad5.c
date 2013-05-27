#include <stdio.h>
#include <string.h>
#define DLUGOSC 100
#define MAX 20
int main(){
    int n;
    int i;
    printf("Podaj n: \n");
    scanf("%i",&n);
    char wpr[MAX];
    char calosc[DLUGOSC];
    char calosc1[DLUGOSC];
    for(i=0;i<n;i++){
        scanf("%s",wpr);
        strcpy(calosc+strlen(calosc),wpr);
        strcpy(calosc+strlen(calosc)," ");
    }
    strcpy(calosc1,calosc);
    printf("%s",calosc1);


    return 0;
}
