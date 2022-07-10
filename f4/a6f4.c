#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int MAX(int x, int y);
int MIN(int x, int y);

main(){

int numb1,numb2;
printf("Dwse 1o arithmo:");
numb1=GetInteger();
printf("Dwse 2o arithmo:");
numb2=GetInteger();

printf("Megistos einai to:%d\n",MAX(numb1,numb2));
printf("Elaxistos einai to:%d",MIN(numb1,numb2));




}

int MAX(int x, int y){
    if(x>y)
        return x;
    else if (y>x)
        return y;


}

int MIN(int x, int y){
    if(x<y)
        return x;
    else if (y<x)
      return y;

}
