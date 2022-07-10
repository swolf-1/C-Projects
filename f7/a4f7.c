#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"


int main(){

  int number,L,counter=0,number2;
  printf("Dwse Arithmo:");
  do{

    number=GetInteger();
    if(number <= 0)
        printf("Parakalw,o arithmos na einai thetikos:");

  }while(number <= 0);

  number2=number;
  while(number2 != 0 )
  {
    number2 /= 10;
    counter++;
  }

  char numb_as_char[counter];
  itoa(number,numb_as_char,10);

  printf("Dwse to mikos tou alfarithmitikou:");
  do{
    L=GetInteger();
    if(L<0 && L < sizeof(number))
        printf("Parakalw to mikos na einai megalitero tou miden kai megalitero apo to megethos tou akeraiou sas.");

  }while(L<0 && L < sizeof(number));

  char alpharithmitikos[L+1];
  int i;
  for ( i=0; i < (L-counter); i++)
    alpharithmitikos[i]='0';

  strncat(alpharithmitikos,numb_as_char,counter);


    printf("O telikos airthmos einai %s",alpharithmitikos);
}


