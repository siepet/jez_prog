#include <stdio.h>

void nabity(int x)
{
	int t[8];
	int i;
	for (i=7;i>=0;i--)
		{
			t[i]=(x&1);
			x = x >> 1;
		}
	for (i=0;i<8;i++)
		{
			printf ("%d",t[i]);
		}
	printf(" ");
}
int main()
{
	unsigned char c;
	int g;
	c=getchar();
	while (c!=EOF)
		{
			g=(int)c;
			nabity(g);
			c=getchar();
		}

}
