#include "pair.h"

int main()
{
  int temp = 1,*ptr=&temp;

  //define struct int_pair_s
  DEFINEPAIR(int,int);
  //create struct with integers 1 and 2
  CREATEPAIR(int,pair,*ptr,2);
  PRINTPAIR("%d",pair);
  //swap integers
  SWAP(int,pair);
  //set first and second integer to 5
  SETSECOND(pair,SETFIRST(pair,5));
  PRINTPAIR("%d",pair);
  //replace integers through stdin
  SCANPAIR("%d",pair);
  PRINTPAIR("%d",pair);
  if (SETFIRST(pair,GETFIRST(pair)+1) < GETSECOND(pair))
    SWAP(int,pair);
  //PRINTLN();
  PRINTPAIR("%d",pair);
  return 0;
}
