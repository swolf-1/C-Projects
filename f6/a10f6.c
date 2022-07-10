// a10f6.c

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


main()
{
    

    system("PAUSE");
}

void ReadData(int pin[][COLUMNS], int r, int c)
{
    int i,j;
    for (i=0;i<r;i++) {
        printf("TMHMA %d \n", i);
        for (j=0;j<c;j++){
         printf("DWSE BA8TMOYS %d MA8HTH: ", j);
            pin[i][j]=GetReal();
        }
    }
}

double findMax(int pin[][COLUMNS], int r, int c)
{
    int i,j;
    int max;
    max=pin[0][0];
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++)
        if (max<pin[i][j])
            max=pin[i][j];
}
    return max;
}




