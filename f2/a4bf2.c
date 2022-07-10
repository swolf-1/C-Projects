#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){

double a,b;

printf("dose a:");
a = GetInteger();

if (a>0 && a<5)
    b = 1/(a * a);
else
    b = a * a;


printf("b:%g",b);


}
