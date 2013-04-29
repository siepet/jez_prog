#include <stdio.h>
#include <string.h>

int main(int ile, char* arg[]){
	int i;
	for(i=ile-1;i>0;i--){
	printf("%s",arg[i]);
	}

	return 0;
}
