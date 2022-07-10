#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

#define m 10
#define n 3

void fill_it(int row, int col, double array[row][col]);
double national_average(int row, int col, double array[row][col]);
void country_average(int row, int col, double temp_array[row][col],double aver_array[]);
void dev(int row, int col, double temp_array[row][col],double md_array[],double NaAv);

int main(){

double temper[m][n];
fill_it(m,n,temper);

double NA;
NA = national_average(m,n,temper);
printf("Ethnikos mesos oros thermokrasias:%g\n",NA);

double averages[m];
country_average(m,n,temper,averages);

double maxdev[m];
dev(m,n,temper,maxdev,NA);

for(int i=0; i < m; i++){

    for(int j=0; j < n; j++){

            printf("Mesi thermokrasia %dhs polis:%g_Megisti apoklisi tis %dhs polis apo ton ethniko meso oro:%g\n",i+1,averages[i],i+1,maxdev[i]);
    }
}


}

void fill_it(int row, int col, double array[row][col]){

int i,j;

for(i = 0; i < row; i++){
    printf("Dwse tis thermokrasies gia thn %dh poli ",i+1);
    for(j = 0; j < col; j++){
        printf("sto %do 8wro:",j+1);
        array[i][j] = GetReal();

    }
  }
}

double national_average(int row, int col, double array[row][col]){

double natavg=0;

for (int i=0; i<row; i++)
{
    for(int j=0; j<col; j++)
    {
      natavg+=array[i][j];
    }
}

natavg = natavg / (row * col);
return natavg;

}

void country_average(int row, int col, double temp_array[row][col],double aver_array[]){

for (int i=0; i<row; i++){
       aver_array[i]=0;
    for(int j=0; j<col; j++){
         aver_array[i]+= temp_array[i][j];
    }
    aver_array[i] = aver_array[i] / n;
}
}

void dev(int row, int col, double temp_array[row][col],double md_array[],double NaAv){

for (int i=0; i<row; i++){
        md_array[i] = 0;
    for(int j=0; j<n; j++){

      if(md_array[i] < fabs(NaAv - temp_array[i][j]))
        md_array[i]= fabs(NaAv - temp_array[i][j]);

    }
  }
}
