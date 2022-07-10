#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
int coffe_num,n2,n1,n50,n20,n10,ypolipo;

printf("Dose kafedes:");
coffe_num = GetInteger();

ypolipo = 500 - coffe_num * 70;
if (ypolipo < 0)
    printf("Den ftanoun ta xrhmata gia tosous kafedes");
 else
  {
   n2 = ypolipo / 200;
   ypolipo -= n2 * 200;

   n1 = ypolipo / 100;
   ypolipo -= n1 * 100;

   n50 = ypolipo / 50;
   ypolipo -= n50 * 50;

   n20 = ypolipo / 20;
   ypolipo -= n20 * 20;

   n10 = ypolipo / 10;
   ypolipo -= n10 * 10;

   printf("Kermata 2E:%d\nKermata 1E:%d\nKermata 50L:%d\nKermata 20L:%d\nKermata 10L:%d",n2,n1,n50,n20,n10);
   }






}
