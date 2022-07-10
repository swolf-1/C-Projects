#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int seats,passengers;

printf("Dosw theseis:");
seats = GetInteger();

printf("Dosw epibates:");
passengers = GetInteger();

if(((double)passengers / (double) seats) >= 0.5)

    printf("Kerdos");

 else if (((double)passengers / (double) seats) < 0.3)

     printf("Zimia");

  else

      printf("Kostos");
}
