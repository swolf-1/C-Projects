#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define R 5
#define C 3
void fill_it(int row,int col,double pin[row][col]);
void average_per_cinema(int row,int col,double pin[row][col],double apc[]);
void average_per_month(int row,int col,double pin[row][col],double apm[]);
void min_monthly_earnings(int row,int col,double pin[row][col],double *min_earning,int *min_row,int *min_col);
void print_results(int row,int col,double apc[],double apm[]);

int main(){

double cinemas[R][C];
fill_it(R,C,cinemas);

double cinemaAver[R];
average_per_cinema(R,C,cinemas,cinemaAver);

double monlthyAver[C];
average_per_month(R,C,cinemas,monlthyAver);

double min;
int min_city,min_month;
min_monthly_earnings(R,C,cinemas,&min,&min_city,&min_month);


print_results(R,C,cinemaAver,monlthyAver);
printf("H mikroteri miniaia eispraksi einai %g sthn %dh poli ton %do mina tou kalokairiou.\n",min,min_city+1,min_month+1);

}

void fill_it(int row,int col,double pin[row][col]){

int i,j;

for(i = 0; i < row; i++){
    printf("Dose tis eisprakseis tou %dou kinimatografou gia ton ",i+1);
    for(j = 0; j < col; j++){

        printf("%do mina tou kalokairiou:",j+1);
        pin[i][j] = GetReal();

    }
    printf("--------------\n");
  }
}

void average_per_cinema(int row,int col,double pin[row][col],double apc[]){

int i,j;

for(i = 0; i < row; i++){
    apc[i] = 0;
    for(j = 0; j < col; j++){

        apc[i] += pin[i][j];

    }
    apc[i] /= 3;
  }
}

void average_per_month(int row,int col,double pin[row][col],double apm[]){

int i,j;

for(i = 0; i < col; i++){

    apm[i] = 0;

    for(j = 0; j < row; j++){

        apm[i] += pin[j][i];

    }
    apm[i] /= 5;
  }
}

void min_monthly_earnings(int row,int col,double pin[row][col],double *min_earning,int *min_row,int *min_col){

int i,j;

*min_earning = pin[0][0];
*min_row = 0;
*min_col = 0;

for(i = 0; i < row; i++){

    for(j = 0; j < col; j++){

        if(pin[i][j] < *min_earning){

            *min_earning = pin[i][j];
            *min_row = i;
            *min_col = j;
        }

    }
  }
}

void print_results(int row,int col,double apc[],double apm[]){

int i,j;

for(i = 0; i < row; i++)
    printf("H mesh miniaia eispraksi gia thn %dh aithousa einai:%g\n",i+1,apc[i]);

printf("------------------------------------------------------------------\n");

for(j = 0; j < col; j++)
    printf("H mesh eispraksi gia ton %do mina tou kalokairiou einai:%g\n",j+1,apm[j]);

printf("------------------------------------------------------------------\n");


}

