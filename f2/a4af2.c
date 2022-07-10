#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
char TaxCode;
long price;
double taxrate;

printf("Dwse to Tax Code:");
TaxCode = getchar();

if (TaxCode == 't' ||TaxCode == 'T' ){

     printf("Dwse Price:");
     price = GetLong();

     printf("Dwse pososto afksisis:");
     taxrate = GetReal();

     price = (double)price + ((double)price * taxrate)/100;

     printf("To poso einai:%ld",price);
    }
    else
     printf("ERROR");







}
