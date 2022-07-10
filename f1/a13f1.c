#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int a,b,c;
double mo;

printf("Dwse vathmo A triminou:");
a =GetInteger();

printf("Dwse vathmo B triminou:");
b =GetInteger();

printf("Dwse vathmo C triminou:");
c =GetInteger();

mo = (a+b+c)/3;
 printf("mo: %g",mo);

}
