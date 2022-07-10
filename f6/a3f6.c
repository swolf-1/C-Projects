#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void swap(int *x, int *y);

int main(){

int A,B,C;
printf("Dwse ton 1o arithmo:");
A = GetInteger();
printf("Dwse ton 2o arithmo:");
B = GetInteger();
printf("Dwse ton 3o arithmo:");
C = GetInteger();

if(B<A)
swap(&B,&A);

if(C<A)
swap(&C,&A);

if(C<B)
swap(&C,&B);

printf("Oi times taksinomimenes einai: %d < %d < %d",A,B,C);

}

swap(int *x, int *y){

int temp;
temp = *x;
*x = *y;
*y = temp;

}
