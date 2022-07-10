#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
main()
{
//pragmatikew metavlites me to double
double saleAmount,profit;
//long gia megalitero akeraio
long purchaseAmount;
//int gia mikrotero akeraio
int rate;

printf("Dwse thn katharh axia:");
purchaseAmount = GetLong();

printf("Dwse to pososto kerdous:");
rate = GetInteger();

profit=rate*purchaseAmount/100;
saleAmount=purchaseAmount + profit;

printf("To kerdos einai %g\n",profit);
printf("To synoliko poso einai %g",saleAmount);

}
