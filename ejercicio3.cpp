#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int** multiply(int **a,int **b,int n)
{
    int **c=new int*[n];
    
    for(int i=0;i<n;i++) 
    {
        c[i]=new int[n];
        for(int j=0;j<n;j++) 
        {
            for(int k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
    return c;
} //n^3 bucles

void fill(int** a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            a[i][j]=rand()%90+10;
    }
}

void print(int** a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int n=6;
    
    int **a=new int*[n];
    for(int i=0;i<n;i++)
        a[i]=new int[n];
        
    int **b=new int*[n];
    for(int i=0;i<n;i++)
        b[i]=new int[n];
        
    srand(time(NULL));
        
    fill(a,n);
    fill(b,n);
    
    print(a,n);
    print(b,n);
    
    int **c=multiply(a,b,n);
    print(c,n);
    
    return 0;
}