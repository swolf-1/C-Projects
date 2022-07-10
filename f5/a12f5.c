#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
int m,n,i,j;
double grades[30][10],aver[30];

do{
printf("Dwse ton arithmo twn mathitwn:");
m = GetInteger();
if(m>30)
    printf("To plithos twn mathimatwn prepei na einai mikroteo i iso tou 30.Prospathiste ksana.\n");
}while(m>30);

do{
printf("Dwse ton arithmo twn thematwn:");
n = GetInteger();
if(n>10)
    printf("To plithos twn thematwn prepei na einai mikroteo i iso tou 10.Prospathiste ksana.\n");
}while(m>10);

for(i=0; i<m; i++){
    aver[i]=0;
    for(j=0; j<n; j++){
        printf("Dwse th bathmologia tou %dou thematos tou %dou mathiti:",j+1,i+1);
        grades[i][j] = GetReal();
        aver[i]+=grades[i][j];
     }
     aver[i]=aver[i] / (double)n;
 }

for(i=0; i<m; i++){

    for(j=0; j<n; j++){
        printf("%6.1lf ",grades[i][j]);
     }
     printf("%6.1lf\n",aver[i]);

    for(j=0; j<n; j++){
        printf("%6.1lf ",grades[i][j]/5);
     }
     printf("%6.1lf\n",aver[i]/5);

 }

}
