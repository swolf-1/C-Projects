#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define m 4


main(){
long pin [m][m] = {
    {0,14,0,3},
    {-2,5,6,8},
    {7,-4,10,4},
    {12,2,1,2}
};
long a,b,sums[8] = {0,0,0,0,0,0,0,0},main_diagonal = 0,secondery_diagonal;
int i,j;

printf("Dwse thn timh tou a:");
a = GetLong();

printf("Dwse thn timh tou b:");
b = GetLong();

//'Gemisame' tou pinaka me tous arithmous pou edwse o xristis
for(i=0; i<m;i++){

    for(j=0; j<m;j++){

        if((i==0&&j==2) || (i==1&&j==0) || (i==2&&j==1) || (i==3&&j==3))
            pin[i][j]+=b;
        else
            pin[i][j]+=a;


    }
}

//Athrisma ana grammwn
for (i=0; i<m; i++){

    for(j=0; j<m; j++){
        sums[i]+=pin[i][j];
    }
}

//Athrisma ana stili
for (i=4; i<8; i++){

    for (j=0; j<m; j++){
        sums[i]+=pin[i-4][j];
    }
}

//Athrisma kirias diagoniou
for(i=0; i<m; i++){
    main_diagonal+=pin[i][i];
}

//Athrisma defterevousas diagoniou
secondery_diagonal = pin[3][0] + pin[0][3] + pin[2][1] + pin[1][2];

//Emfanisi stoixeiwn ows upodikniete sthn ekfonisi
for (i=0; i<m; i++){

    for (j=0; j<m; j++){

        printf("%.2ld ",pin[i][j]);
    }
    printf("| %.2ld \n",sums[i]);
}

printf("------------\n");

for(i=4; i<8; i++){

    printf("%.2ld ",sums[i]);
}

printf("\n%.2ld, %.2ld \n",main_diagonal,secondery_diagonal);

//Sigrisi olon twn athrismatwn(grammwn kai stilwn) metaksi tous
int flag=1;
for(i=1; i<8; i++){
    if(sums[i-1] != sums[i]){
        flag=0;
        break;
    }
 }

if(flag==1){
 //Sigrisi diagoniwn me mia apo tis times tou pinaka sums
 if(main_diagonal != sums[7] || secondery_diagonal != sums[7])
    flag=0;
}

//me vasi thn timi tis flag emfanisi an einai magic i oxi
if (flag==1)
    printf("MAGIC");
else
    printf("NOT MAGIC");
}
