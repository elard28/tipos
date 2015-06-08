#include <stdlib.h>
#include <stdio.h>

int main ()
{
  int *buffer1; 
  int *buffer2; 
  int *buffer3;
  
  buffer1 = (int*) malloc (100*sizeof(int));
  buffer2 = (int*) calloc (100,sizeof(int));
  buffer3 = (int*) realloc (buffer2,500*sizeof(int));
  
  printf("buffer1: %p\n",(void*)buffer1);
  printf("buffer2: %p\n",(void*)buffer2);
  printf("buffer3: %p\n",(void*)buffer3);

  printf("buffer1: %d\n",*buffer1);
  printf("buffer2: %d\n",*buffer2);
  printf("buffer3: %d\n",*buffer3);
  
  free (buffer1);
  free (buffer3);
  
  printf("despues\n");
  printf("buffer1: %p\n",(void*)buffer1);
  printf("buffer2: %p\n",(void*)buffer2);
  printf("buffer3: %p\n",(void*)buffer3);
  
  printf("buffer1: %d\n",*buffer1);
  printf("buffer2: %d\n",*buffer2);
  printf("buffer3: %d\n",*buffer3);
  
  return 0;
}