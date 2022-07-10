#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
int a,b,cln,sum,carry;

printf("Dwse tin metavliti A:");
a = GetInteger();

printf("Dwse tin metavliti B:");
b = GetInteger();

printf("Dwse tin metavliti Cln:");
cln = GetInteger();

if (a == 0 )
 {
            if (b == 0)
                {
                        if (cln == 0)
                            {
                                sum = 0;
                                carry = 0;
                            }
                            else
                            {
                                sum = 1;
                                carry = 0;
                            }
                }
                else
                {
                        if(cln == 0)
                            {
                                sum = 1;
                                carry = 0;
                            }
                            else
                            {
                                sum = 0;
                                carry = 1;
                            }
                }
 }
 else
 {
            if(b==0)
                {
                        if (cln == 0)
                            {
                                sum = 1;
                                carry = 0;
                            }
                            else
                            {
                                sum=0;
                                carry=1;

                            }
                }
                else
                {
                        if(cln == 0)
                            {
                                sum = 0;
                                carry = 1;

                            }
                            else
                            {
                                sum = 1;
                                carry = 1;
                            }
                }
 }
 printf("Sum_Carry \n");
 printf(" %d _ %d ",sum,carry);
}


