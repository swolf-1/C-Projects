#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int i;

printf("Dwse enan arithmo apo to 1 eos to 7 :");
i = GetInteger();

if (i == 1) printf("Monday");
  else if (i == 2) printf("Tuesday");
     else if (i == 3) printf("Wednesday");
        else if (i == 4)printf("Thursday");
          else if (i == 5)printf("Friday");
            else if (i == 6)printf("Saturday");
              else printf("Sunday");

}

