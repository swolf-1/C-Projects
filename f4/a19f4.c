#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

double Wallis(int x);

main(){
    int artios;
    double pi;
    printf("Dwse mia artia timi:");

    do{
    artios=GetInteger();
    if(artios%2 != 0)
        printf("H timi pou dwsate den einai artia.Prospathiste ksana.");
    }while((artios%2) != 0);

    pi =2*Wallis(artios);
    printf("pi=%.7g",pi);
}




double Wallis(int x){

  double sum=1;

  for(int i=2;i<=x;i=i+2){
    sum *= pow(i,2) /((i-1)*(i+1));
  }
return sum;

}




