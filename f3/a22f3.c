#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){

long number;

printf("Dwse arithmo:");
number = GetLong();

printf("H fthinousa akolouthia einai:");
while(number >= 0)
{
    if(number !=0)
        printf("%ld,",number);
    else
       printf("%ld",number);

number--;

}








}
