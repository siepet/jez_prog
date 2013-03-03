#include <stdio.h>
#include <math.h>

int bit_znaku (int i, char n){
	int a,b;
	a = (int)pow(2,i);
	b = n & a;
if (b==0) return 0;
else return 1;
}
int main()
{
int x;
char z;

x=31;

z = getchar();
while(z != EOF){
	printf("%d",bit_znaku(x,z));
	
	z = getchar();
}
}
