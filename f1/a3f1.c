#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
long siskeves;
int pen,iko,pente,mia;

printf("Dwse to plithos twn syskeuwn:");
siskeves = GetLong();

pen = siskeves / 50;

siskeves = siskeves - (pen * 50);

iko = siskeves / 20;

siskeves = siskeves - (iko*20);

pente = siskeves / 5;

siskeves = siskeves - (pente * 5);

mia = siskeves / 1;

printf("50: %d \n",pen);
printf("20: %d \n",iko);
printf("5 : %d \n",pente);
printf("1 : %d \n",mia);






}
