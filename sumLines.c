/*
 * Project : hw#3
 * Name    : Bryan Romero
 * Date    : ##/##/####
 * File    : sumLines.c
 * Notes   : A description of what this program does.
 */
#include <stdio.h>
#include "numReader.h"
#include "flags.h"



int main(void)
{
  unsigned char flags = 0;
  char line[MAX];
  int total = 0;
  int current = 0;
  while(getline1(line, MAX) != 0) {
    current = line_value(line);
    if (current >= 0) {
      total += current;
      flags = get_mask(total);
      printf("Current total is: %d\n", total);
      print_flags(flags);
    }
  }
  printf("*************************************\n"
         "* Final total is: %10.10d        *\n"
         "*************************************\n",
         total);
}
