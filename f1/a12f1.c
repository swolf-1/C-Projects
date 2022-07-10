#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int kathara_tm,mikta_tm;
double dt,df;

printf("Dwse ta kathara tm tou spitiou:");
kathara_tm = GetInteger();

printf("Dwse ta mikta tm tou spitiou:");
mikta_tm = GetInteger();

dt = (double)kathara_tm*1.33*61/365;
printf("ta DT einai:%.4g\n",dt);

df = (double)mikta_tm*0.13*61/365;
printf("O DF einai:%.3g",df);

}
