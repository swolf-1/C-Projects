#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{

long epistolesEswteikou,epistolesExwterikou;
double kostos;

printf("Dwse ton arithmo epistolwn eswterikou:");
epistolesEswteikou = GetLong();

printf("Dwse ton arithmo epistolwn exwterikou:");
epistolesExwterikou = GetLong();

kostos = (epistolesEswteikou*0.30) + (epistolesExwterikou*0.80);

printf("To synoliko kostos apostolhs einai %g",kostos);



}
