#include <stdio.h>


int main()
{
	int x[512];
	int y[512];
	
	for (int i = 0; i < 512; i++)
	{
		y[i] = x[i] + 1;
		
		printf("(R) %x  (W) %x \n", (0x8200 + 2*i), (0x2000 + (2*i)));
	}
	
}
