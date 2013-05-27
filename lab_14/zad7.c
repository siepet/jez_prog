#include <stdio.h>
#include <string.h>
int main(){
	char string1[100];
	char string2[100];
	char string[100];
	int i;
	int dl;
	scanf("%s",string1);
	scanf("%s",string2);
	dl = strlen(string1) + strlen(string2) - 3;
	for(i=0;i<dl;i++){
		printf("%c",string1[i]);
		printf("%c",string2[i]);	
	}
	printf("\n");
	return 0;
}
