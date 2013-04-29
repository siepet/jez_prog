#include <stdio.h>
#include <string.h>
   
#define PROG(typ, typ2) \
for(int i=ile-1;i>1;i--){ \
typ pomoc; \
sscanf(arg[i],"%"#typ2,&pomoc); \
printf("%"#typ2,pomoc); \
printf(" "); \
}



int main(int ile, char* arg[]) {
  if (ile < 2) {
    printf("\n POPRAWNE WYWOLANIE:");
    printf("\n   program  typ  ciag_danych\n\n");
  }
  else
    if (strcmp(arg[1], "int") == 0)  PROG(int, i)
    else
      if (strcmp(arg[1], "double") == 0)  PROG(double, lf)
      else
	if (strcmp(arg[1], "char") == 0)  PROG(char, c)
	else  printf("\n ZNANE TYPY: int, double, char\n\n");

  return 0;
}
