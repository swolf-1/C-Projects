#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
double weight,height,DMS;

printf("Dwse ypsos:");
height = GetReal();

printf("Dwse baros:");
weight = GetReal();

DMS = weight / (height*height);

if (DMS < 18.5)
printf("Lipovaris");
 else if(DMS < 25)
    printf("Kanonikos");
    else if(DMS <30)
        printf("Ypervaros");
      else
          printf("Paxysarkos");



}
