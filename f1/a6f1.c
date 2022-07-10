#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int hm_erg;
long amoivi;
double dwro;

printf("Dwse tis hmeres ergasias to etous:");
hm_erg = GetInteger();

printf(" Dwse thn hmerisia amoibh:");
amoivi = GetLong();

printf("Dwse to pososto dwsrou:");
dwro = GetReal();

printf("To dwro einai %g",hm_erg*amoivi*dwro);





}
