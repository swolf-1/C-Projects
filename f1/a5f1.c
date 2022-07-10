#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int wres;
long antimisthia;
double pososto,akatharistes,poso_kratiseon,kathares_apodoxes;

printf("Dwse ton arithmo twn wrwn:");
wres = GetInteger();

printf("Dwse thn wriaia antimisthia:");
antimisthia = GetLong();

printf("Dwse to pososto twn krathsewn:");
pososto = GetReal();

kathares_apodoxes = wres *antimisthia;
poso_kratiseon = kathares_apodoxes * pososto;
akatharistes = kathares_apodoxes + poso_kratiseon;



printf("Oi akatharistes apodoxes einai:%g \n",akatharistes);
printf("Oi krathseis einai: %g \n",poso_kratiseon);
printf("Oi kathares apodoxes einai: %g \n",kathares_apodoxes);

}
