#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int cube(int number);
int Sum_Cube(int n);
bool isArmstrong(int x);

main(){

    for (int i=1;i<=999;i++)
        {
        if(isArmstrong(i))
            printf("The number %d is Armstrong.\n",i);
        }
}

int cube(int number){

return (number * number * number);

}

int Sum_Cube(int n){
    int x,y,z,sum;

    x = n/100;
    y = (n%100)/10;
    z = n%10;

    return (cube(x) + cube(y) + cube(z));

}

bool isArmstrong(int x){

 return (x == Sum_Cube(x));


}
