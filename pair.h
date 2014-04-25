#ifndef __NGPAIR_H__
#define __NGPAIR_H__

#include <stdio.h>

/* DESCRIPTION:
 * --------------
 * Defines a new kind of pair structure. The structure is always named as <NAME>_pair_s, e.g. integer_pair_s, where the 
 * name part is received as a parameter of the function. The structure has always two members of type T, which is also received
 * as a parameter. The members are named as first and second.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: name of the structure.
 * 2nd parameter: type of the members.
 *
 * EVALUATES TO:
 * --------------
 * NONE.
 *
 */
#define DEFINEPAIR(NAME,TYPE)  \
  struct NAME##_pair_s{        \
  TYPE first;                  \
  TYPE second;	               \
}				

/* DESCRIPTION:
 * --------------
 * Creates a new pair structure. The name parameter defines the type of the structure and var parameter defines the variable name
 * reserved for the structure. Below is the general format of the structure and an example with name integer and variable name esko:
 *
 *    format: <NAME>_pair_s <VAR>
 *    example: integer_pair_s esko
 *
 * Each structure created should first be defined with DEFINEPAIR macro.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: name of the structure.
 * 2nd parameter: variable name of the structure variable.
 * 3rd parameter: the first variable of the pair, the type of the variable should match the type used in DEFINEPAIR macro.
 * 4th parameter: the second variable of the pair, the type of the variable should match the type used in DEFINEPAIR macro.  
 *
 * EVALUATES TO:
 * --------------
 * NONE.
 *
 */
#define CREATEPAIR(NAME,VAR,PAR1,PAR2)  \
  struct NAME##_pair_s VAR;             \
  ((VAR).first) = (PAR1);               \
  ((VAR).second) = (PAR2)			

/* DESCRIPTION:
 * --------------
 * Fetches the value of the first member of the parameter structure.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: Object of the pair structure, whose first member is returned.
 *
 * EVALUATES TO:
 * --------------
 * The value of the first member of the parameter pair.
 *
 */
#define GETFIRST(NAME)  \
  ((NAME).first)


/* DESCRIPTION:
 * --------------
 * Fetches the value of the second member of the parameter structure.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: object of the pair structure, whose second member is returned.
 *
 * EVALUATES TO:
 * --------------
 * The value of the second member of the parameter pair.
 *
 */
#define GETSECOND(NAME)  \
  ((NAME).second)			

/* DESCRIPTION:
 * --------------
 * Sets the value of the first member of the parameter pair structure to the parameter value.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: object of the pair structure, whose first member is set to the parameter value.
 * 2nd parameter: the value to be set.
 *
 * EVALUATES TO:
 * --------------
 * The new value.
 *
 */

#define SETFIRST(NAME,VAL)  \
  (((NAME).first) = (VAL))		

/* DESCRIPTION:
 * --------------
 * Sets the value of the second member of the parameter pair structure to the parameter value.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: object of the pair structure, whose second member is set to the parameter value.
 * 2nd parameter: the value to be set.
 *
 * EVALUATES TO:
 * --------------
 * The new value.
 *
 */

#define SETSECOND(NAME,VAL)  \
  (((NAME).second) = (VAL))

/* DESCRIPTION:
 * --------------
 * Reads two values from the standard input and stores them to the first and second members of the parameter pair structure.
 * The SCANPAIR macro must work for all atomic data types e.g. integers and double's, but not for strings etc.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: format specifier in string format e.g. "%d", which matches the type of the parameter pair structure's members.
 * 2nd parameter: object of the pair structure, into which members the values are stored.
 *
 * EVALUATES TO:
 * --------------
 * NONE.
 *
 */
#define SCANPAIR(FORMAT,NAME)     \
  printf("Enter 1st value: ");    \
  scanf(FORMAT,&((NAME).first));  \
  printf("Enter 2nd value: ");    \
  scanf(FORMAT,&((NAME).second))		

/* DESCRIPTION:
 * --------------
 * Prints the parameter pair structure into standard ouput. The format of the print should be the following:
 *
 *    <first member of the pair> <second member of the pair>\n
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: format specifier in string format e.g. "%d", which matches the type of the parameter pair structure's members.
 * 2nd parameter: object of the pair structure, whose members are printed.
 *
 * 	-EVALUATES TO:
 * --------------
 * NONE.
 *
 */

#define PRINTPAIR(FORMAT,NAME)	\
  printf(FORMAT" "FORMAT"\n",((NAME).first),((NAME).second))

/* DESCRIPTION:
 * --------------
 * Swaps the two members of the parameter structure. The swap must be a single statement, meaning it should be
 * placed inside an iterative statement e.g. a while loop.
 *
 * PARAMETERS:
 * --------------
 * 1st parameter: type of the parameter structure's members.
 * 2nd parameter: object of the pair structure, whose members are swapped.
 *
 * EVALUATES TO:
 * --------------
 * NONE.
 *
 */

#define SWAP(TYPE,NAME)               \
  do {                                \
    TYPE temporary1;                  \
    temporary1 = (NAME).first;	      \
    ((NAME).first) = ((NAME).second); \
    ((NAME).second) = temporary1;     \
  }                                   \
  while (0)
#endif

/* DESCRIPTION
 * ---------------
 * Prints new line
 * ---------------
*/

#define PRINTLN() printf("\n")


