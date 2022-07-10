#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void GetTime(long SysSecs, int *hours,int *minutes,int *seconds);

int main(){

long sec;
int h,m,s;
printf("Enter Device Secs:");
sec = GetLong();
GetTime(sec,&h,&m,&s);

printf("Time is %d:%d:%d",h,m,s);

}

void GetTime(long SysSecs, int *hours,int *minutes,int *seconds){

*hours = SysSecs / 3600;
SysSecs -= (*hours * 3600);

*minutes = SysSecs / 60;
SysSecs -= *minutes * 60;

*seconds = SysSecs;


}


