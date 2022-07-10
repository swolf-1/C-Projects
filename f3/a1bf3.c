#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main(){

long Arithmo_Aytok,Orio;
double Rythmos;
int years = 0;

printf("Dwse ton arxiko arithmo autokinitwn:");
Arithmo_Aytok = GetLong();

printf("Dwse ton etisio arithmo afksisis:");
Rythmos = GetReal();

printf("Dwse to orio:");
Orio = GetLong();

while(Arithmo_Aytok <= Orio){

        Arithmo_Aytok=ceil(Arithmo_Aytok + Arithmo_Aytok * Rythmos);
        years++;
}

printf("%d\n%ld",years,Arithmo_Aytok);




}
