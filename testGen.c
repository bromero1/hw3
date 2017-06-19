#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MASK 0b00000001

int main(void)
{
  //char temp[100];
  //char *tp = temp;
  int i;
  time_t t;
  //size_t t; 

  srand( (unsigned) time(&t) );
  //srand( (unsigned) size(&t) );
  for(i = 0; i < 20; i++) {
    if(i % 3 == 0) {
      printf("%c%c%c\n", rand() % 95 + 32, rand() % 95 + 32, rand() % 95 + 32);
    }
    else if(i % 2 == 0) {
      printf("0X%X\n", rand() % 100);
    }
    else{
      printf("0%o\n", rand() % 100);
    }
  }

}
