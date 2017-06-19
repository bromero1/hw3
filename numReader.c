/*
 * Project : hw#3
 * Name    : Bryan Romero
 * Date    : ##/##/####
 * File    : numReader.c
 * Notes   : A description of what this program does.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "numReader.h"


int getline1(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int power(int base, int n)
{
  int i, p;
  p = 1;
  for (i = 1; i <= n; ++i) {
    p *= base;
  }
  return p;
}

int isodigit(int c)
{
  
  return (c >= '0' && c<= '7');
}

int decimal_value(int c)
{
  /* Your code here */return 0 ;
}

int find_base(char line[])
{
  for(int i = 0; i < strlen(line); i++)
  {
    if(line[0]== '0'){
      printf("%s\n","Starts with 0." );
    }
    

  }// end for loop 
  return 0 ;
}

int line_value(char line[])
{

  return 0 ;
  /* Your code here */
}
