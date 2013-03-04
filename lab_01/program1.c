#include <stdio.h>

int main()
{
	
	char z;
	int k;

	printf("for \n");
	for( ; (z=getchar())!=EOF; printf("%c",z));

	printf("while \n");	
	
	
	do
	{
	z = getchar();
	printf("%c",z);
	} while(z!=EOF);
	

}
