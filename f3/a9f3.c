#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
 long grade,sum=0,grades_number=0;
 double average;
 printf("Dwse ton vathmo:");
 grade = GetLong();

 while(grade != -1)
 {
  grades_number++;
  sum+=grade;

 printf("Dwse ton vathmo:");
 grade = GetLong();
 }
if (sum == 0)

    printf("Den dothikan dedomena");

    else
    {
        average = (double)sum / (double)grades_number;
        printf("Sunolo dedomenon pou dothikan:%ld\n",grades_number);
        printf("To athroisma einai:%ld\n",sum);
        printf("O mesos oros einai:%g\n",average);
    }







}
