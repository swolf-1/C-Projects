#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
long katheti1,katheti2;
double emvado;

printf("Dwse to mhkos ths 1s kathetis pleuras :");
katheti1 = GetLong();

printf("Dwse to mhkos ths 2s kathetis pleuras :");
katheti2 = GetLong();

emvado = ((double)katheti1 * (double) katheti2)/2;

printf("To emvado einai:%g",emvado);
}