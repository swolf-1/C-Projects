#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
long kod_ar;
double misthos,ev_am,amoivi;
int wres;

printf("Dwse ton kwdiko:");
kod_ar = GetLong();

if (kod_ar >= 1000)
{
  printf("Dwse etisio mistho:");
  misthos = GetReal();

  ev_am = misthos / 52;
  printf("H evdomadiea amoivi einai %g",ev_am);
}
 else
 {
  printf("Dwse tis wres abdomadieas ergasias:");
  wres = GetInteger();

  printf("dwse thn amoibh ana wra:");
  amoivi = GetReal();
 }
   if (wres>40)
   {
    printf("H ebdomadiaia amoibh einai:%g",((wres-40)*(amoivi+amoivi*50/100))+40*amoivi);
   }
   else
   {
    printf("H ebdomadiaia amoibh einai:%g",wres*amoivi);
   }


}
