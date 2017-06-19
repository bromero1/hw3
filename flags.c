/*
 * Project : hw#3
 * Name    : Bryan Romero
 * Date    : ##/##/####
 * File    : example.c
 * Notes   : A description of what this program does.
 */
#include "flags.h"
#include "numReader.c"
#include <stdio.h>
#define MASK 1  /* 0000 0001  used for shorthand in shifting */

unsigned char get_flags(int total)
{

 unsigned char flag = 0; 
  
  //if odd set bit 1 on 
  if((total % 2 != 0)){
     flag  |= MASK;
     printf("\n\t%s\t%d%s%d\t" ,"Flag #", 1 , " is on. Value: " , flag); 
  }else printf("%s", "\tFlag #  1 is off. " );
  
  //Check if total is divisible by i where 3 <= i <= 9 
  // and setting bits on if true. 
  for (int i = 3, shift = 1; i <= 9 ; i++, shift++)
  {
  	if (!(total%i))
  	{
  		flag |= (MASK << shift); 
      printf("\n\t%s\t%d%s%d\t" ,"Flag #", shift+1, " is on. Value: " , flag); 
  	}
    else printf("\n\t%s\t%d%s%d\t" ,"Flag #", shift+1, " is off. Value: " , flag);
  
  }
   printf("\n\t%d\n" ,flag); 

  return flag; 
}

void print_flags(unsigned char flags)
{

  printf("\n\n\t%s\n", "print_flags: ");
	if ((flags & MASK)) 
    printf("%d\t%s\n", 1, "Total is odd."); 
  else 
    printf("\t%s", "Total is even.");

  for (int i = 3, shift = 1; i <= 9 ; i++, shift++)
  {
    if (    ( flags & (MASK << shift)   ) )
    {     
      printf("%d\n", shift+1 );
      printf("\t%s%d\n" ,"Total is divisible by ", i); 
    }
    //else printf("\n\t%s\t%d" ,"Total is not divisible by", i );
  
  }

}

int main(int argc, char const *argv[])
{

    unsigned char c = get_flags(15);     
    print_flags(  c); 

     char  word [] = {"0xFFF"}; 
     find_base(word); 

  return 0;
}