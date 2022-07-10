#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
double amount,discount,rate;
long purchaseAmount;

printf("Dwse thn axia tou emporeumatos :");
purchaseAmount = GetReal();

printf("Dwse to pososto ekptwshs:");
rate = GetReal();

amount = purchaseAmount - purchaseAmount*rate;
printf("to poso plhromis einai:%g\n",amount);

discount = purchaseAmount*rate;
printf("h ekptwsh einai:%g",discount);


}
