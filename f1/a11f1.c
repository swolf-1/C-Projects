#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
long timi_temaxiou,pros_paraggelia;
double fpa,kostos;

printf("Dwse thn timh temaxion:");
timi_temaxiou = GetLong();

printf("Dwse to pososto FPA:");
fpa = GetReal();

printf("Dwse to plithos twn temaxiwn:");
pros_paraggelia = GetLong();

kostos = (timi_temaxiou*pros_paraggelia)+(fpa* timi_temaxiou*pros_paraggelia);
printf("To kostos ths paragelias einai %g",kostos);


}
