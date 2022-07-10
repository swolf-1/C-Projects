#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int MENU();
double Exchange(int i,double euro);
main(){

int x;
x=MENU();

if ( x!= 6)
{
printf("Dwse to poso pou thes na metatrepsis:");
double money = GetReal();
printf("H nea aksia einai:%g",Exchange(x,money));

}


return 0;
}

MENU(){
int c;
do{
printf("1. Metetroph se dollaria\n");
printf("2. Metatroph se lires\n");
printf("3. Metatroph se fraga Elbetias\n");
printf("4. Metatroph se dollaria Canada\n");
printf("5. Metatroph se gien\n");
printf("6. Exodos\n");
c = GetInteger();
if(c!=1 && c!=2 && c!=3 && c!=4 && c!=4 && c!= 5 && c!= 6)
    printf("WRONG!!Please select one of the following\n");
}while((c!=1) && (c!=2) && (c!=3) && (c!=4) && (c!=5) && (c!= 6));
return c;


}

double Exchange(int i,double euro){

switch(i)
{
case 1:return euro/0.89;
case 2:return euro/0.618;
case 3:return euro/1.5465;
case 4:return euro/1.3565;
case 5:return euro/109.22;
}









}
