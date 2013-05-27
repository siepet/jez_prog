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
    strcpy(calosc, "");
    for(i=0;i<n;i++){
        scanf("%s",wpr);
        strcpy(calosc+strlen(calosc),wpr);
        strcpy(calosc+strlen(calosc)," ");
    }
    printf("%s \n",calosc);


    return 0;
}
