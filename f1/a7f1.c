#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
long eis_4,eis_8,eis_18;
double fpa;

printf("Dwse tis synolikes eisapraksis gia FPA 0.04:");
eis_4 = GetLong();

printf("Dwse tis synolikes eisapraksis gia FPA 0.08:");
eis_8 = GetLong();

printf("Dwse tis synolikes eisapraksis gia FPA 0.18:");
eis_18 = GetLong();

fpa = 0.04*eis_4 +0.08*eis_8 + 0.18*eis_18;

printf("to synoliko poso FPA einai %g",fpa);
}

