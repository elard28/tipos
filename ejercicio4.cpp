#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;



int main(int argc, char const *argv[])
{
	int mat[10][10];

	double secs=0.0;
	clock_t t_ini, t_fin;
    t_ini = clock();
	
    for (int n = 0; n < 1000; ++n)
    {
    	for (int i = 0; i < 10; ++i)
    	{
    		for (int j = 0; j < 10; ++j)
    		{
    			cout<<mat[i][j];
    		}
    	}
    }
    cout<<endl;

	t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
	
	cout<<secs*1000.0<<endl;

	return 0;
}