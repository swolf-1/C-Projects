#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
double miles,litre;

printf("Dose milia kai litra:");
miles = GetReal();
litre = GetReal();

if ((litre / miles) < 0.9)
    printf("Poly xamili");
  else if((litre / miles) < 1.2)
      printf("Xamili");
    else if ((litre / miles) < 1.8)
        printf("Kanoniki");
      else
          printf("Ypsili");





}

