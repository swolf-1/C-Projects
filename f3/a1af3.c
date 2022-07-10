#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define cars_start  80000
#define cars_limit 160000
#define rate         0.07

main(){
int years = 0;
long sum = cars_start;

while(sum <= cars_limit){

        sum=sum + sum*rate;
        years++;
}

printf("%d\n%ld",years,sum);




}
