#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
double epidoma;
int mis,pedia;

printf("Dwse ton vasiko mistho:");
mis = GetInteger();

printf("dwse ton arithmo ton paidio:");
pedia = GetInteger();

if (pedia == 1)
    epidoma = (double) mis * 4 / 100;
  else if (pedia == 2 )
      epidoma = (double) mis * 9 / 100;
      else if (pedia == 3)
        epidoma = (double) mis * 15 / 100;
        else
            epidoma = (double) mis * 15 / 100 + (4 / 100 * (double) mis) * (pedia - 3);

printf("to epidoma einai: %g",epidoma);


}
