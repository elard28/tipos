#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a[10][15];

	int **b=new int*[10];
	for (int i = 0; i < 10; ++i)
		b[i]=new int[15];


	return 0;
}