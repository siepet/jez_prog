#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define DLUGOSC 100
void zamien(char* input, char* output){
    int length = strlen(input);
    int i = 0;
    int w = length - 1;
    do{
            output[w] = input[i];
            i++;
            w--;
    }while(w>=0);
    output[length] = '\0';

}
int main(int argc, char* argv[]){
    char output[DLUGOSC];
    char calosc[DLUGOSC];
    char get;
    char tmp;
    int i = 0;
    printf("Tekst do sprawdzenia czy palindrom:\n");
    do{
        get = getchar();
        if((int)get != 32 && (int)get != 46 && (int)get != 33 && (int)get != 44){
            tmp = tolower(get);
            calosc[i] = tmp;
            i++;
        }

    }while(get != 10);
    calosc[i-1] = '\0';
    zamien(calosc,output);
        if(strcmp(calosc,output) == 0){
            printf("\npalindrom");
        } else {
            printf("\nNIE palindrom\n");
        }
    printf("\n");
    return 0;
}
