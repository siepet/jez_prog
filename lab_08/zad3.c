#define CZYT(zmienna,typ) \
{ printf("Podaj wartosc a:"); scanf("%"#typ,&zmienna); printf("%"#typ,zmienna ); }
#include <stdio.h>
int main(){
int a;
CZYT(a,i);


}

