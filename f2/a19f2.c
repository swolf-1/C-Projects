#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int CO2;
float teli;

printf("Dwse gram CO2/khm:");
CO2 = GetInteger();

if (CO2 < 120)
 teli = CO2*0.9;
  else if(CO2 < 140)
    teli = CO2*1.1;
    else
        teli = CO2*1.7;

printf("to poso pliromis einai: %.2f",teli);





}
