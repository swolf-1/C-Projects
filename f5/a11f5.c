#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

#define m 10
#define n 3

int main(){



double temper[m][n] = {
    {10,20,30},
    {40,50,60},
    {70,80,90},
    {10,20,30},
    {40,50,60},
    {70,80,90},
    {10,20,30},
    {40,50,60},
    {70,80,90},
    {00,00,00}
 };

for (int i=0; i<m; i++){
printf("Dwse tis thermokrasies gia thn %dh poli ",i+1);
    for(int j=0; j<n; j++){
        printf("sto %do 8wro:",j+1);
        temper[i][j] = GetReal();
    }
}

double natavg=0;

for (int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
    {
      natavg+=temper[i][j];
    }
}

natavg = natavg / (m*n);
printf("Ethnikos mesos oros thermokrasias:%g\n",natavg);

double average[m];

for (int i=0; i<m; i++){
       average[i]=0;
    for(int j=0; j<n; j++){
         average[i]+= temper[i][j];
    }
    average[i]=average[i] / n;
}

double maxdev[m];

for (int i=0; i<m; i++){
        maxdev[i] = 0;
    for(int j=0; j<n; j++){
      if(maxdev[i] < fabs(natavg - temper[i][j]))
        maxdev[i]= fabs(natavg - temper[i][j]);

    }
        printf("Mesi thermokrasia %dhs polis:%g_Megisti apoklisi tis %dhs polis apo ton ethniko meso oro:%g\n",i+1,average[i],i+1,maxdev[i]);
}












}
