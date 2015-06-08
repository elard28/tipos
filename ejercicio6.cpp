#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

typedef short int num;
//typedef int num;
//typedef long long num;


int main(int argc, char const *argv[])
{
	double secs=0.0;
	clock_t t_ini, t_fin;
    t_ini = clock();
	num a=0;
	while(a<10000)
		a++;
	t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
	
	cout<<secs*1000.0<<endl;

	return 0;
}