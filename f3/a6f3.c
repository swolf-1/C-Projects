#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
 long n,start = 1,next_to_last = 0,last = 1,change;
  printf("Dwse ton arithmo twn orwn pou thes na emafanistoun:");
  n = GetInteger();

while (start <=  n)
{
 if (start == 1)
    printf("%d\n",next_to_last);
   else if (start == 2)
      printf("%d\n",last);
     else
     {
        printf("%d\n",next_to_last + last);
        change = next_to_last + last;
        next_to_last = last;
        last = change;
     }
start++;
}







}
